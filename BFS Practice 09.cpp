#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
const int mx = 1e6+123;
vector<int> adj[mx];
int lev[mx];

    void dfs(int s)
    {
        memset(lev,-1,sizeof(lev));
        lev[s] = 0;

        queue<int> q;
        q.push(s);

        while(!q.empty())
        {
            int u = q.front();
            q.pop();

            for(auto v: adj[u])
            {
                if(lev[v]==-1)
                {
                    lev[v] = lev[u]+1;
                    q.push(v);
                }
            }
        }
    }

int main()
{
    optimize();
    int t;
    cin>>t;
    while(t--)
    {
        for(int i=0;i<mx;i++)
        {
            adj[i].clear();
        }

        int n,m;
        cin>>n>>m;
        for(int i=0;i<m;i++)
        {
            int u,v;
            cin>>u>>v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        dfs(1);

        cout<<lev[n]<<endl;
    }

    return 0;
}

