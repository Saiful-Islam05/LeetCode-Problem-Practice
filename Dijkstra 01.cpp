#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector<pii> vii;
typedef vector<pll> vll;
const int inf = 2000000000;
const int infLL = 9000000000000000000;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'


/*
pll = pair<long long,long long>
vll = vector<pair<long long,long long>
*/

const int mx = 1e5+123;
/*
vector<pair<int,int>>adj[mx];  //You may have to fix it.
long long dist[mx];
*/
vii adj[mx];
ll dist[mx];




void dijkstra(int s,int n)
{
    for(int i=0; i<=n; i++)
    {
        dist[i] = infLL;  //Initialization
    }

    dist[s] = 0;  //Initialization source distance.
   // priority_queue<pair<long long,long long>,vector<pair<long long,long long>>,greater<pair<long long,long long>>> pq;
    priority_queue<pll,vll,greater<pll>> pq;
    pq.push({0,s});  //pushing source in queue.

    while(!pq.empty())
    {
        int u = pq.top().second;
        ll curD = pq.top().first;
        pq.pop();

        if(dist[u]<curD)
        {
            continue;    //Important
        }


        for(auto p: adj[u])
        {
            int v = p.first;
            ll w = p.second;
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
    for(int i=1; i<=m; i++)
    {
        int u,v,w;
        cin>>u>>v>>w;
        adj[u].push_back({v,w});
        adj[v].push_back({u,w});

    }

    dijkstra(0,n);

    for(int i=0; i<n; i++)
    {
        cout<<dist[i]<<" ";
    }
    cout<<endl;

    return 0;
}
