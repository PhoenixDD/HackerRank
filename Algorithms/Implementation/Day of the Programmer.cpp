#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    int y;
    cin>>y;
    bool leap=false;
    if((y%4==0&&y%100!=0&&y>1918)||(y%400==0&&y>1918))
        leap=true;
    else if(y%4==0&&y<1918)
        leap=true;
    if(leap)
        cout<<"12.09."<<y;
    else if(y==1918)
        cout<<"26.09.1918";
    else
        cout<<"13.09."<<y;
    return 0;
}
