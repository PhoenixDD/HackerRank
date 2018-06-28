#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n,k,count=0,page=1;
    cin>>n>>k;
    vector<int> t(n);
    for(int i=0;i<n;i++)
        cin>>t[i];
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<=t[i]/k;j++)
        {
            if(page>k*(j-1)&&page<=k*j)
                count++;
            page++;
        }
        if(t[i]%k!=0&&page>t[i]-t[i]%k&&page<=t[i])
            count++;
        if(t[i]%k!=0)
            page++;
    }
    cout<<count;
    return 0;
}
