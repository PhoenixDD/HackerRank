#include<iostream>
#include<algorithm>
#include<cstring>
#include<tuple>
#define MAXN 100005
#define MAXLG 100
using namespace std;
struct entry
{
    long long int nr[2];
    long long int p;
}L[MAXN];
char A[MAXN];
long long int P[MAXLG][MAXN];
int k,T;
long long int sum,rem,N,stp,cnt,suff,i;
int cust_cmp(struct entry a, struct entry b)
{
    return tie(a.nr[0],a.nr[1])<tie(b.nr[0],b.nr[1]);
}
vector<long long int> get_lcp()
{
    long long int k=0;
    vector<long long int> lcp(N,0);
    vector<long long int> ranking(N,0);

    for(long long int i=0; i<N; i++) ranking[L[i].p]=i;

    for(long long int i=0; i<N; i++, k?k--:0)
    {
        if(ranking[i]==N-1)
        {
            k=0;
            continue;
        }
        int j=L[ranking[i]+1].p;
        while(i+k<N && j+k<N && A[i+k]==A[j+k]) k++;
        lcp[ranking[i]]=k;
    }
    return lcp;
}
int main()
{
    vector<long long int> lcp;
    cin>>T;
    for(long long int t=0;t<T;t++)
    {
        cin>>A;

        cin>>k;
    for(N=strlen(A),i=0;i<N;i++)
        P[0][i]=A[i]-'a';
    for(stp=1,cnt=1;cnt<N;stp++,cnt*=2)
    {
        for(i=0;i<N;i++)
        {
            L[i].nr[0]=P[stp-1][i];
            if(i+cnt<N)
                L[i].nr[1]=P[stp-1][i+cnt];
            else
                L[i].nr[1]=-1;
            L[i].p=i;
        }
        sort(L,L+N,cust_cmp);
        for(i=0;i<N;i++)
            if((i>0)&&(L[i].nr[0]==L[i-1].nr[0])&&(L[i].nr[1]==L[i-1].nr[1]))
                P[stp][L[i].p]=P[stp][L[i-1].p];
            else
                P[stp][L[i].p]=i;
    }
    lcp=get_lcp();
    sum=0;
    for(i=0;i<N;i++)
    {
        if(i==0)
        {
            if((((N-L[i].p)*(N-L[i].p+1))/2)<k)
                sum=((N-L[i].p)*(N-L[i].p+1))/2;
            else
            {
                rem=k-sum;
                suff=i;
                break;
            }
        }
        else
        {
            if((sum+(((N-L[i].p)*(N-L[i].p+1))/2)-((lcp[i-1]*(lcp[i-1]+1))/2))<k)
            {
                sum+=(((N-L[i].p)*(N-L[i].p+1))/2)-((lcp[i-1]*(lcp[i-1]+1))/2);
            }
            else
            {
                rem=k-sum;
                suff=i;
                break;
            }
        }
    }
    sum=0;
    for(i=(suff==0)?1:lcp[suff-1]+1;i<=N-L[suff].p;i++)
    {
        if(sum+i<rem)
           sum+=i;
        else
        {
            rem=rem-sum;
            break;
        }
    }
    cout<<A[L[suff].p+rem-1]<<endl;
    }
    return 0;
}