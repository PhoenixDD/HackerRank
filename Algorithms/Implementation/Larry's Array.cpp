#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    int T,N;
    cin>>T;
    while(T--)
    {
        cin>>N;
        int parity=0;
        vector<int> vec(N);
        for(int i=0;i<N;i++)
            cin>>vec[i];
        for(int i=0;i<N;i++)
            for(int j=i+1;j<N;j++)
                parity^=vec[i]>vec[j];
        if(!parity)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
