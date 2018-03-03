#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    int n,d,m,count=0,sum;
    cin>>n;
    vector<int>choc(n);
    for(int i=0;i<n;i++)
        cin>>choc[i];
    cin>>d>>m;
    for(int i=0;i<n-m+1;i++)
    {
        sum=0;
        for(int j=i;j<i+m;j++)
            sum+=choc[j];
        if(sum==d)
            count++;
    }
    cout<<count;
    return 0;
}
