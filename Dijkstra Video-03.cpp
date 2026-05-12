#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
    const ll infLL = 9000000000000000000;
    const int mx = 1e5+123;
    vector<pair<int,int>> adj[mx];
    long long dist[mx];

   // vii adj[mx];
   // vector<pii> adj[mx]
   // vector<pair<int,int>> adj[mx];


     void dijkstra(int s,int n)
     {
         for(int i=0;i<=n;i++)
         {
             dist[i] = infLL;
         }

         dist[s] = 0;
         priority_queue<pair<long long,long longd
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

