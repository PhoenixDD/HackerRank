#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

int main()
{
    int q,n,m,u,v,s;
    cin>>q;
    while(q--)
    {
        cin>>n>>m;
        vector<vector<int>> adjlist(n+1);
        vector<int> weights(n+1,0);
        vector<bool> visited(n+1,false);
        for(int i=0;i<m;i++)
        {
            cin>>u>>v;
            adjlist[u].push_back(v);
            adjlist[v].push_back(u);
        }
        cin>>s;
        queue<int> q;
        q.push(s);
        visited[s]=true;
        while(!q.empty())
        {
            for(auto i:adjlist[q.front()])
            {
                if(!visited[i])
                {
                    visited[i]=true;
                    q.push(i);
                    weights[i]=weights[q.front()]+1;
                }
            }
            q.pop();
        }
        for(int i=1;i<=n;i++)
        {
            if(i!=s)
            {
                if(weights[i]==0)
                    cout<<-1<<" ";
                else
                    cout<<weights[i]*6<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}