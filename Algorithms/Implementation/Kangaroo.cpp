#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    pair<int,int> k1,k2;
    cin>>k1.first>>k1.second>>k2.first>>k2.second;
    if(k1==k2||k1.first==k2.first)
        cout<<"YES";
    else if((k1.first>k2.first&&k1.second>=k2.second)||(k1.first<k2.first&&k1.second<=k2.second))
        cout<<"NO";
    else
    {
        if(abs(k1.first-k2.first)%abs(k2.second-k1.second)==0)
           cout<<"YES";
        else
           cout<<"NO";
    }
    return 0;
}
