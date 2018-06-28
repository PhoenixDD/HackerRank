#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
vector<int>memo;
vector<int>a;
int knap(int n,int k)
{
    if(memo[k]!=0)
        return memo[k];
    else if(k==0||n==0)
        return 0;
    else if(a[n-1]>k)
        return memo[k]=knap(n-1,k);
    else
        return memo[k]=max(a[n-1]+knap(n,k-a[n-1]),knap(n-1,k));
}
int main()
{
    int T,n,k;
    cin>>T;
    while(T--)
    {
        cin>>n>>k;
        a.resize(n);
        memo.clear();
        memo.resize(k+1,0);
        for(int i=0;i<n;i++)
            cin>>a[i];
        cout<<knap(n,k)<<endl;
    }
    return 0;
}