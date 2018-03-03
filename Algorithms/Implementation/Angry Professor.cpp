#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    int T,N,K,time;
    cin>>T;
    while(T--)
    {
        cin>>N>>K;
        while(N--)
        {
            cin>>time;
            if(time<=0)
                K--;
        }
        K<=0?cout<<"NO"<<endl:cout<<"YES"<<endl;
        
    }
    return 0;
}
