#include<iostream>
#include<vector>
#include<cstdio>
#include<climits>
#include<algorithm>
#include<set>
#include<unordered_set>
using namespace std;
vector<vector<pair<int,int>>>dist;
int main()
{
    int n,m;
	cin>>n>>m;
	dist.resize(n+1);
	int from,to;
    long long weight;
	for(int i=0;i<m;++i)
    {
        cin>>from>>to>>weight;
	    dist[from].push_back(make_pair(to,weight));
	    dist[to].push_back(make_pair(from,weight));
	}
    set<pair<int,int>> weights;
    unordered_set<int> mst(n);
    long long cost=0;
    int S;
    cin>>S;
    weights.insert(make_pair(0,S));
    while(!weights.empty())
    {
        if(mst.find(weights.begin()->second)==mst.end())
        {
            mst.insert(weights.begin()->second);
            cost+=weights.begin()->first;
            int currnode=weights.begin()->second;
            weights.erase(weights.begin());
            for(auto i:dist[currnode])
                weights.insert(make_pair(i.second,i.first));
        }
        else
            weights.erase(weights.begin());
    }
    cout<<cost;
	return 0;
}