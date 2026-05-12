#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

    const int mx = 2512;
    const long long infLL = 1e18;
    struct info
    {
        int u,v,w;
    };

    vector<info> edge;
    long long dist[mx];
    int par[mx];


    vector<int> bellmanFord(int s,int n,int m)
    {
        vector<int> path;
        for(int i=0;i<=n;i++)
        {
            dist[i] = infLL;
        }

        int x = -1;
        dist[s] = 0;

        for(int i=1;i<=n;i++)
        {
            x = -1;

            for(int j=0;j<m;j++)
            {
                int u = edge[j].u;
                int v = edge[j].v;
                int w = edge[j].w;

                if(dist[u]+w<dist[v])
                {
                    dist[v] = dist[u]+w;
                    par[v] = u;
                    x = v;
                }
            }
        }

        if(x==-1)
        {
            return path;
        }

        for(int i=1;i<=n;i++)
        {
            x = par[x];
        }

        int y = x;

        while(y!=x || path.size()==0)
        {
            path.push_back(y);
            y = par[y];
        }

        path.push_back(x);

        reverse(path.begin(),path.end());

        return path;
    }


int main()
{
    optimize();
    int n,m;
    cin>>n>>m;

    for(int i=1;i<=m;i++)
    {
        int u,v,w;
        cin>>u>>v>>w;
        edge.push_back({u,v,w});
    }

    vector<int> ans = bellmanFord(1,n,m);

    if(ans.size()==0)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
        for(auto u: ans)
        {
            cout<<u<<" ";
        }
        cout<<endl;
    }
    return 0;
}

