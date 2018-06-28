#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;


int main()
{
    int n,num,max=0;
    cin>>n;
    unordered_map<int,int>  freq(n);
    for(int i=0;i<n;i++)
    {
        cin>>num;
        freq[num]++;
    }
    for(auto &i:freq)
        if(i.second>max)
            max=i.second;
    cout<<n-max;
    return 0;
}