#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int total;
void DFS(vector<vector<int>> *adj,int n,vector<bool> *visited,int node)
{
        (*visited)[node]=1;
        total++;
        for(auto i:adj->at(node))
            if(!(*visited)[i])
                DFS(adj,n,visited,i);
}
int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int n,m,cr,cl,n1,n2;
        long long cost=0;
        cin>>n>>m>>cl>>cr;
        vector<vector<int>> adj(n+1);
        vector<bool> visited(n+1,0);
        for(int i=0;i<m;i++)
        {
            cin>>n1>>n2;
            adj[n1].push_back(n2);
            adj[n2].push_back(n1);
        }
        for(int i=1;i<=n;i++)
        {
            if(!visited[i])
            {
                total=0;
                DFS(&adj,n,&visited,i);
                if(cr<cl)
                    cost+=(total-1)*cr+cl;
                else
                    cost+=total*cl;
            }
        }
        cout<<cost<<endl;
    }
    return 0;
}