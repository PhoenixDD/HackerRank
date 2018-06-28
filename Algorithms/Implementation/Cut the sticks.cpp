#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;


int main()
{
    bool changed=true;
    int N,smallest=numeric_limits<int>::max(),newsmallest;
    cin>>N;
    vector<int> sticks(N);
    for(int i=0;i<N;i++)
    {
        cin>>sticks[i];
        if(sticks[i]<smallest)
            smallest=sticks[i];
    }
    while(N)
    {
        newsmallest=INT_MAX;
        if(changed)
                cout<<N<<endl;
        changed=false;
        for(int i=0;i<sticks.size();i++)
        {
            if(sticks[i]>0)
            {
                sticks[i]-=smallest;
                if(sticks[i]<=0)
                {
                    N--;
                    changed=true;
                }
            }
            if(sticks[i]>0&&sticks[i]<newsmallest)
                newsmallest=sticks[i];
        }
        smallest=newsmallest;
    }
    return 0;
}