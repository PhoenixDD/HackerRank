#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<iomanip>
using namespace std;


int main() {
    double pos=0,neg=0,zero=0;
    int t;
    cin>>t;   
    int temp;
    for(int i=0;i<t;i++)
    {
        cin>>temp;
        if(temp<0)
            neg++;
        else if(temp>0)
            pos++;
        else
            zero++;
    }
    cout<<fixed<<setprecision(6)<<pos/t<<endl<<neg/t<<endl<<zero/t;
    return 0;
}
