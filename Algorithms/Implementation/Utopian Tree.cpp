#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    int T,N,height;
    cin>>T;
    while(T--)
    {
        height=1;
        cin>>N;
        for(int i=1;i<=N;i++)
            if(i%2==0)
                height++;
            else
                height*=2;
        cout<<height<<endl;
    }
    return 0;
}
