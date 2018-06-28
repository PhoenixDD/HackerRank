#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    int T,n,a,b;
    cin>>T;
    while(T--)
    {
        cin>>n>>a>>b;
        if(a>b)
            swap(a,b);
        if(a==b)
            cout<<(n-1)*a;
        else
            for(int i=0;i<n;i++)
                cout<<i*b+(n-i-1)*a<<" ";
        cout<<endl;
    }
    return 0;
}