#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n,d;
    long long count=0;
    cin>>n>>d;
    vector<int>a(n);
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++)
            if(a[j]-a[i]==d)
                for(int k=j+1;k<n;k++)
                    if(a[j]-a[i]==a[k]-a[j])
                        count++;
    cout<<count;
    return 0;
}