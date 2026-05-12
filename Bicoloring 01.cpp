#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
const int mx = 200;
vector<int> adj[mx];
int col[mx];


    bool isBipartite(int s)
    {
        memset(col,-1,sizeof(col));
        col[s] = 1;
        queue<int> q;
        q.push(s);


        while(!q.empty())
        {
            int u = q.front();
            q.pop();

            for(auto v: adj[u])
            {

                if(col[v]==-1)
                {
                    if(col[u]==1)
                    {
                        col[v] = 2;
                    }
                    else
                    {
                        col[v] = 1;
                    }

                    q.push(v);
                }
                  if(col[v]==col[u])
                  {
                      return 0;
                  }
            }
        }

        return true;
    }
int main()
{
    optimize();
    int n;
    while(cin>>n)
    {
        if(n==0)
        {
            break;
        }

        for(int i=0;i<=n;i++)
        {
            adj[i].clear();
        }

        int m;
        cin>>m;
        for(int i=0;i<m;i++)
        {
            int u,v;
            cin>>u>>v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        if(isBipartite(0))
        {
            cout<<"BICOLORABLE."<<endl;
        }
        else
        {
            cout<<"NOT BICOLORABLE."<<endl;
        }
    }

    return 0;
}

