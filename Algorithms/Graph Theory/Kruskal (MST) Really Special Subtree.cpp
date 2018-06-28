#include<iostream>
#include<vector>
#include<cstdio>
#include<set>
using namespace std;
vector<int> parent,Rank;
int Find(int x)
{
    return parent[x]==x?x:parent[x]=Find(parent[x]);
}
void Union(int x,int y)
{
    int xset=Find(x),yset=Find(y);
    if(xset!=yset)
    {
        Rank[xset]<Rank[yset]?parent[xset]=yset:parent[yset]=xset;
        if(Rank[xset]==Rank[yset])
            Rank[xset]++;
    }
}
int main()
{
    int N,M;
    cin>>N>>M;
    set<pair<int,pair<int,int>>> edjlist;
    Rank.resize(N,0);
    parent.resize(N,0);
    for(int i=0;i<N;i++)
        parent[i]=i;
    int w,m1,m2;
    for(int i=0;i<M;i++)
    {
        cin>>m1>>m2>>w;
        edjlist.insert(make_pair(w,make_pair(m1,m2)));
    }
    long long sum=0;
    while(!edjlist.empty())
    {
        if(Find(edjlist.begin()->second.first)!=Find(edjlist.begin()->second.second))
        {
            Union(edjlist.begin()->second.first,edjlist.begin()->second.second);
            sum+=edjlist.begin()->first;
        }
        edjlist.erase(edjlist.begin());
    }
    cout<<sum;
}
