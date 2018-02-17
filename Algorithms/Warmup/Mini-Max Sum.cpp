#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<climits>
#include<numeric>
using namespace std;


int main() {
    long long int temp,min=LLONG_MAX,max=LLONG_MIN,sum=0;
    for(int i=0;i<5;i++)
    {
        cin>>temp;
        sum+=temp;
        if(temp<min)
            min=temp;
        if(temp>max)
            max=temp;
    }
    cout<<sum-max<<" "<<sum-min;
    return 0;
}