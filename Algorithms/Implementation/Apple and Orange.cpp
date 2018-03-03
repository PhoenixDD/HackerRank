#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    int s,t,a,b,m,n,d,count=0;
    cin>>s>>t>>a>>b>>m>>n;
    while(m--)
    {
        cin>>d;
        if(d>0&&d+a>=s&&d+a<=t)
            count++;
    }
    cout<<count<<endl;
    count=0;
    while(n--)
    {
        cin>>d;
        if(d<0&&b+d>=s&&b+d<=t)
            count++;
    }
    cout<<count;
    return 0;
}
