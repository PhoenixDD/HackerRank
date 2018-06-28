#include<iostream>
#include<vector>
#include<cstdio>
#include<unordered_map>
using namespace std;
vector<vector<int>> adj;
vector<bool> visited;
int result=0;
int dfs(int v)
{
    int vertices=0;
    visited[v]=true;
    for(auto i:adj[v])
    {
        if(!visited[i])
        {
            int components=dfs(i);
            if(components%2==0)
                result++;
            else 
                vertices+=components;
        }
    }
    return vertices+1;
}
int main()
{
    int N,M;
    cin>>N>>M;
    adj.resize(N+1);
    visited.resize(N+1,false);
    int v1,v2;
    for(int i=0;i<M;i++)
    {
        cin>>v1>>v2;
        adj[v1].push_back(v2);
        adj[v2].push_back(v1);
    }
    dfs(1);
    cout<<result;
}