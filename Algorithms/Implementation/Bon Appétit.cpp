#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n,k,charged,sum=0;
    cin>>n>>k;
    vector<int> c(n);
    for(int i=0;i<n;i++)
    {
        cin>>c[i];
        sum+=c[i];
    }
    cin>>charged;
    if(charged==sum/2)
        cout<<charged-(sum-c[k])/2;
    else
        cout<<"Bon Appetit";
    return 0;
}
