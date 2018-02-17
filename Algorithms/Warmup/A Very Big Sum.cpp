#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    long long sum=0,num;
    cin>>t;
    while(t--)
    {
        cin>>num;
        sum+=num;
    }
    cout<<sum;
    return 0;
}