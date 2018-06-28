#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t,c,m,n,result,wrap=0;
    cin>>t;
    while(t--)
    {
        cin>>n>>c>>m;
        result=n/c;
        wrap=result;
        while(wrap>=m)
        {
            result+=wrap/m;
            wrap=wrap%m+wrap/m;
        }
        cout<<result<<endl;
    }
    return 0;
}