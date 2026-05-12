#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
    vector<int> adj[100];
int main()
{
    optimize();
    int n,m;
    cin>>n>>m;

    for(int i=1;i<=m;i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    queue<int> q;

    vector<int> level(n+1,-1);
    q.push(1);

    level[1] = 0;

    while(!q.empty())
    {
        int u = q.front();
        q.pop();

        for(auto v: adj[u])
        {
            if(level[v]==-1)
            {
                level[v] = level[u]+1;
                q.push(v);
            }

        }
    }

    for(int i=1;i<=n;i++)
    {
       cout<<i<<" : "<<level[i]<<endl;
    }

    return 0;
}

