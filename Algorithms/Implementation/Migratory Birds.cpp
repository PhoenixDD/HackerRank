#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    int N,type,max=-1,index=0;
    cin>>N;
    vector<int> types(6,0);
    for(int i=0;i<N;i++)
    {
        cin>>type;
        types[type]++;
    }
    for(int i=5;i>0;i--)
        if(types[i]>=max)
        {
            max=types[i];
            index=i;
        }
    cout<<index;
    return 0;
}
