#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a.begin(),a.end());
    int temp=a[0],count=1,maxcount=1;
    for(int i=1;i<n;i++)
    {
        if(a[i]-temp<=1)
        {
            count++;
            maxcount=max(maxcount,count);
        }
        else
        {
            count=1;
            temp=a[i];
        }
    }
    cout<<maxcount;
    return 0;
}
