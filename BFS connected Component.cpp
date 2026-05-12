#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
  map<string,vector<string>>adj;
  map<string,int> lev;
  map<string,string> par;

  void bfs(string s)
  {
      lev.clear();
      lev[s] = 1;
      queue<string> q;
      q.push(s);

      while(!q.empty())
      {
          string u = q.front();
          q.pop();

          for(auto v: adj[u])
          {
              if(lev[v]==0)
              {
                  lev[v] = lev[u]+1;
                  par[v] = u;
                  q.push(v);
              }
          }
      }
  }
int main()
{
    optimize();
    int n;
    bool yes = 0;
    while(cin>>n)
    {
            if(yes)
            {
                cout<<endl;
            }
            yes = 1;

            adj.clear();
            par.clear();
        for(int i=0;i<n;i++)
        {
            string u,v;
            cin>>u>>v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        string s,t;
        cin>>s>>t;
        bfs(s);

        if(lev[t]==0)
        {
            cout<<"No route\n";
            continue;
        }

        vector<pair<string,string>>ans;

        while(!par[t].empty())
        {
            ans.push_back({par[t],t});
            t = par[t];

        }

        reverse(ans.begin(),ans.end());

        for(auto u: ans)
        {
            cout<<u.first<<" "<<u.second<<endl;
        }
    }

    return 0;
}

