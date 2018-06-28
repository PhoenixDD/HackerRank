#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    int k,n,end=-1,result=0;
    cin>>n>>k;
    vector<int> a(n);
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a.begin(),a.end());
    int start=a[0];
    for(int i=0;i<a.size();i++)
    {
        if(end==-1)
        {
            if(a[i]-start>k)
            {
                end=a[i-1];
                result++;
            }
        }
        if(end!=-1)
        {
            if(a[i]-end>k)
            {
                start=a[i];
                end=-1;
            }
        }
        
    }
    if(end==-1)
        result++;
    cout<<result;
    return 0;
}