#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
vector<int> denom;
vector<vector<long>> memo;
long ways(int V,int N)
{
    if(V==0)
        return 1;
    else if(V<0)
        return 0;
    else if(N<0&&V>0)
        return 0;
    else if(memo[V][N]!=-1)
        return memo[V][N];
    else
        return memo[V][N]=ways(V,N-1)+ways(V-denom[N],N);
}
int main()
{
    int V,N;
    cin>>V>>N;
    denom.resize(N);
    memo.resize(V+1,vector<long>(N,-1));
    for(int i=0;i<N;i++)
        cin>>denom[i];
    cout<<ways(V,N-1);
    return 0;
}