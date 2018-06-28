#include<iostream>
#include<cstring>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
int main()
{
    int N,Q,curr_lcp;
    long long int K;
    string temp_strn,temp_strn1;
    char strn[2000];
    vector<int>sum;
    set<string>sa;
    set<string>::const_iterator sa_it;
    cin>>N;
    while(N--)
    {
        cin>>strn;
        temp_strn="";
        for(int i=strlen(strn)-1;i>=0;i--)
        {
            temp_strn=strn[i]+temp_strn;
            sa.insert(temp_strn);
        }
    }
    sum.push_back((*sa.begin()).size());
    temp_strn1=*sa.begin();
    for(auto it=++sa.begin();it!=sa.end();it++)
    {
        curr_lcp=0;
        while(temp_strn1[curr_lcp]==(*it)[curr_lcp])
            curr_lcp++;
        sum.push_back(sum.back()+(*it).size()-curr_lcp);
        temp_strn1=*it;
    }
    cin>>Q;
    while(Q--)
    {
        cin>>K;
        auto sum_it=lower_bound(sum.begin(),sum.end(),K);
        sa_it=sa.begin();
        if(sum_it==sum.end())
            cout<<"INVALID"<<endl;
        else
        {
            advance(sa_it,sum_it-sum.begin());
            cout<<(*sa_it).substr(0,(*sa_it).size()-*sum_it+K)<<endl;
        }
    }
}
