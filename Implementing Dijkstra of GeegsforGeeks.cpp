#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'



        vector<int> dijkstra(vector<vector<int>> adj, int s, int n)
        {
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<n;j++)
                {
                    if(adj[i][j]==0)
                    {
                        adj[i][j]= 1e7;
                    }
                }
            }

            vector<int> dist(n,1e7);
            priority_queue<pair<int,int>, vector<pari<int,int>>, greater<pair<int,int>> pq;

            dist[s] = 0;
            pq.push({0,s});

            while(!pq.empty())
            {
                int u = pq.top().second;
                int curD = pq.top().first;
                pq.top();

                if(curD>dist[u])
                {
                    continue;
                }

                for(int v = 0;v<n;v++)
                {
                    if(curD+adj[u][v]<dist[v])
                    {
                        dist[v] = curD+adj[u][v];
                        pq.push({dist[v},v);
                    }
                }

            }

            return dist;
        }







int main()
{
    optimize();


    return 0;
}

