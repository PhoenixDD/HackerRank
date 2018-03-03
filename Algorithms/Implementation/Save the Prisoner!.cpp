#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    int T,N,M,S;
    cin>>T;
    while(T--)
    {
        cin>>N>>M>>S;
        if((S+M-1)%N==0)
            cout<<N<<endl;
        else
            cout<<(S+M-1)%N<<endl;
    }
    return 0;
}
