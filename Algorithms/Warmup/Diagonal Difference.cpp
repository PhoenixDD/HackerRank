#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t,sum=0,temp;
    cin>>t;
    for(int i=0;i<t;i++)
        for(int j=0;j<t;j++)
        {
            cin>>temp;
            if(i==j)
                sum+=temp;
            if(j==t-i-1)
                sum-=temp;
        }
    cout<<abs(sum);
    return 0;
}