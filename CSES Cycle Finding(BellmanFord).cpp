#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

    struct info
    {
        int u,v,w;
    };

    const int mx = 1e5+123;
    vector<info> edge;
    long long dist[mx];
    int par[mx];
    const long long infLL = 1e18;

    vector<int> bellmanFord(int s,int n,int m)
    {
        vector<int> path;

        for(int i=1;i<=n;i++)
        {
            dist[i] = infLL;
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
        edge.push_back({u,v,w});
    }

    return 0;
}

