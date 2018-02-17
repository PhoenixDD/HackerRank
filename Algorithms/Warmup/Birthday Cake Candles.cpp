#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t,max=0,height,num=0;
    cin>>t;
    while(t--)
    {
        cin>>height;
        if(height==max)
            num++;
        else if(height>max)
        {
            max=height;
            num=1;
        }
    }
    cout<<num;
    return 0;
}
