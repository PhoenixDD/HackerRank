#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    int count=0,level=0,N;
    char direction;
    bool belowsealevel;
    cin>>N;
    while(N--)
    {
        cin>>direction;
        if(direction=='U')
        {
            level++;
            if(!level)
                belowsealevel=true;
        }
        else
        {
            level--;
            if(!level)
                belowsealevel=false;
        }
        if(level==0&&belowsealevel==true)
            count++;
    }
    cout<<count;
    return 0;
}
