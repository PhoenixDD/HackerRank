#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n,m,max=-1,min=101,count=0;
    cin>>n>>m;
    vector<int> a(n),b(m);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]>max)
            max=a[i];
    }
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
        if(b[i]<min)
            min=b[i];
    }
    int j,i;
    for(i=max;i<=min;i+=max)
    {
        for(j=0;j<n;j++)
        {
            if((i%a[j])!=0)
                break;
        }
        if(j==n)
        {
            max=i;
            break;
        }
    }    
    for(i=max;i<=min;i+=max)
    {
        for(j=0;j<m;j++)
        {
            if(b[j]%i!=0)
                break;
        }
        if(j==m)
            count++;
    }
    cout<<count;
    return 0;
}
