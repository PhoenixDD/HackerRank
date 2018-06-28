#include<iostream>
#include<vector>
#include<cstdio>
#include<unordered_map>
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
    long long N,P;
    cin>>N;
    Rank.resize(N,0);
    parent.resize(N);
    for(int i=0;i<N;i++)
        parent[i]=i;
    cin>>P;
    pair<long long,long long> p;
    for(int i=0;i<P;i++)
    {
        cin>>p.first>>p.second;
        Union(p.first,p.second);
    }
    for(int i=0;i<N;i++)
        Find(i);
    unordered_map<long long,long long> counter;
    counter.reserve(N);
    long long countpairs=0;
    for(int i=0;i<N;i++)
        counter[parent[i]]++;
    for(auto i=counter.begin();i!=counter.end();i++)
        countpairs+=(i->second*(i->second-1))/2;
    cout<<(N*(N-1))/2-countpairs;
}