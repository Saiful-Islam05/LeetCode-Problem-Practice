#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
    struct info
    {
        int u,v,w;
    };

    const int mx = 1e3+123;
    vector<info> e;
    long long dist[mx];
    long long infLL = 1e18;

    bool belmanFord(int s,int n,int m)
    {
        for(int i=0;i<=n;i++)
        {
            dist[i] = infLL;
        }

        dist[s] = 0;
         bool isCycle = false;
        for(int i=1;i<=n;i++)
        {
             isCycle = false;

             for(int j=0;j<m;j++)
             {
                 int u = e[j].u;
                 int v = e[j].v;
                 int w = e[j].w;

                 if(dist[u]<infLL)
                 {
                     if(dist[u]+w<dist[v])
                     {
                         dist[v] = max(dist[u]+w,-infLL);
                         isCycle = true;
                     }
                 }
             }
        }

        return isCycle;
    }



int main()
{
    optimize();
    int t;
    cin>>t;

    while(t--)
    {
        e.clear();
        int n,m;
        cin>>n>>m;

        for(int i=0;i<m;i++)
        {
            int u,v,w;
            cin>>u>>v>>w;
            e.push_back({u,v,w});
        }

       bool result = belmanFord(0,n,m);

        if(result)
        {
            cout<<"possible"<<endl;
        }
        else
        {
            cout<<"not possible"<<endl;
        }
    }

    return 0;
}

