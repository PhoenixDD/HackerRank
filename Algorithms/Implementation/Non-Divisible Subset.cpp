#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{   
    int n,k,result=0;
    long temp;
    cin>>n>>k;
    vector<long> rem(k,0);
    for(int i=0;i<n;i++)
        cin>>temp,rem[temp%k]++;
    for(int i=1,j=k-1;i<j;i++,j--)
        result+=max(rem[i],rem[j]);
    result+=rem[0]>0?1:0;
    if(k%2==0)
        result+=rem[k/2]>0?1:0;
    cout<<result;
    return 0;
}
