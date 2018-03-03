#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int check(long n)
{
    int count=0;
    long temp=n;
    while(temp)
    {
        if(temp%10)
            if(!(n%(temp%10)))
                count++;
        temp/=10;
    }
    return count;
}
int main()
{
    int T;
    long n;
    cin>>T;
    while(T--)
    {
        cin>>n;
        cout<<check(n)<<endl;
    }
    return 0;
}
