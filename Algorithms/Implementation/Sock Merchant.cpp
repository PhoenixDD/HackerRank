#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;


int main()
{
    unordered_map<int,bool> pairs;
    int N,count=0,temp;
    cin>>N;
    while(N--)
    {
        cin>>temp;
        if(!pairs[temp])
            pairs[temp]=true;
        else
        {
            count++;
            pairs[temp]=false;
        }
    }
    cout<<count;
    return 0;
}
