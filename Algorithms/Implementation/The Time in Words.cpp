#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int h;
    cin >> h;
    int m;
    cin >> m;
    vector<string> first={"one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
    if(m==0)
        cout<<first[h-1]<<" o' clock";
    else if(m==15)
        cout<<"quarter past "<<first[h-1];
    else if(m==30)
        cout<<"half past "<<first[h-1];
    else if(m==45)
    {
        if(h!=12)
            cout<<"quarter to "<<first[h];
        else
            cout<<"quarter to one";
    }
    else if(m<20)
    {
        if(m!=1)
            cout<<first[m-1]<<" minutes past "<<first[h-1];
        else
           cout<<first[m-1]<<" minute past "<<first[h-1];
    }
    else if(m==20)
        cout<<"twenty minutes past "<<first[h-1];
    else if(m<30)
        cout<<"twenty "<<first[m-21]<<" minutes past "<<first[h-1];
    else if(m>40)
    {
        if(h!=12)
        {
            if(m!=59)
                cout<<first[59-m]<<" minutes to "<<first[h];
            else
                cout<<first[59-m]<<" minute to "<<first[h];
        }
        else
        {
            if(m!=59)
                cout<<first[59-m]<<" minutes to one";
            else
                cout<<first[59-m]<<" minute to one";
        }
    }
    else if(m==40)
    {
        if(h!=12)
            cout<<"twenty minutes to "<<first[h];
        else
            cout<<"twenty minutes to one";
    }
    else if(m>30)
    {
        if(h!=12)
            cout<<"twenty "<<first[39-m]<<" minutes to "<<first[h];
        else
            cout<<"twenty "<<first[39-m]<<" minutes to one";
    }
    return 0;
}