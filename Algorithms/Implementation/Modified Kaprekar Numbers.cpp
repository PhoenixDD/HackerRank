#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    long long p;
    int q,count,temp;
    bool flag=false;
    cin>>p>>q;
    for(;p<=q;p++)
    {
        for(count=1;;count++)
            if((p*p)/(long long)pow(10,count)==0)
                break;
        if(count%2==0)
        {
            if((p*p)/(long long)pow(10,count/2)+(p*p)%(long long)pow(10,count/2)==p)
                cout<<p<<" ",flag=true;
        }
        else
        {
            if((p*p)/(long long)pow(10,count/2+1)+(p*p)%(long long)pow(10,count/2+1)==p&&(p*p)%(long long)pow(10,count/2+1)!=0)
                cout<<p<<" ",flag=true;
        }
    }
    if(!flag)
        cout<<"INVALID RANGE";    
    return 0;
}
