#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

map<string,vector<string>> adj;
map<string,int> inDegree;

int main()
{
    optimize();

    int n,m;
    cin>>n>>m;


    set<string> node;

    for(int i=0; i<m; i++)
    {
        string u,v;
        cin>>u>>v;
        adj[u].push_back(v);

        inDegree[v]++;

        node.insert(u);
        node.insert(v);

    }

    vector<string> ans;

    queue<string> q;

    for(auto u: node)
    {
        if(inDegree[u]==0)
        {
            q.push(u);
        }

    }

    while(!q.empty())
    {
        string u = q.front();
        q.pop();

        ans.push_back(u);

        for(auto v: adj[u])
        {
            inDegree[v]--;

            if(inDegree[v]==0)
            {
                q.push(v);
            }
        }

    }

    if(node.size()==ans.size())
    {
        cout<<"Yes its Possible"<<endl;

        for(auto u: ans)
        {
            cout<<u<<endl;
        }
    }
    else
    {
        cout<<"NO Impossible"<<endl;
    }


    return 0;
}

