#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    string msg;
    cin>>msg;
    int flr=floor(sqrt(msg.length())),end;
    if(flr*flr>=msg.length())
        end=flr;
    else if(flr*(flr+1)>=msg.length())
        end=flr+1;
    else
        flr++,end=flr;
    for(int i=0;i<end;i++)
    {
        for(int j=i;j<msg.length();j+=end)
            cout<<msg[j];
        cout<<" ";
    }
    return 0;
}