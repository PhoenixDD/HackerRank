#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<limits.h>
using namespace std;


int main() {
    int t,min=INT_MAX,max=INT_MIN,rec,minc=0,maxc=0;
    cin>>t;
    while(t--)
    {
        cin>>rec;
        if(rec<min)
        {
            min=rec; 
            minc++;
        }
        if(rec>max)
        {
            max=rec;
            maxc++;
        }
    }
    cout<<maxc-1<<" "<<minc-1;
    return 0;
}
