#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

    const int mx = 1e5+123;
    long long  dist[mx];
    vector<pair<int,int>> adj[mx];
    long long int infLL = 2e18;


    void dijkstra(int s,int n)
    {
        for(int i=0;i<=n;i++)
        {
            dist[i] = infLL;
        }

        dist[s] = 0;

        priority_queue<pair<long long,long long>,vector<pair<long long,long long>>,greater<pair<long long,long long>>> pq;

        pq.push({0,s});

        while(!pq.empty())
        {
            int u = pq.top().second;
            long long curD = pq.top().first;
            pq.pop();

            if(dist[u]<curD)
            {
                continue;
            }

            for(auto p: adj[u])
            {
                int v = p.first;
                long long w = p.second;

                if(curD+w<dist[v])
                {
                    dist[v] = curD+w;
                    pq.push({dist[v],v});
                }
            }
        }

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
        adj[u].push_back({v,w});
        adj[v].push_back({u,w});
    }

    dijkstra(1,n);

    for(int i=1;i<=n;i++)
    {
        cout<<dist[i]<<" ";
    }

    cout<<endl;

    return 0;
}

