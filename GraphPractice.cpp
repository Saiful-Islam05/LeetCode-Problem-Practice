#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
int adjMat[100][100];
int main()
{
    optimize();
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;
        adjMat[u][v] = 1;
        adjMat[v][u] = 1;

    }

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<adjMat[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    while(1)
    {
        int u,v;
        cin>>u>>v;
        if(adjMat[u][v]==1)
        {
            cout<<"Edge exists"<<endl;
        }
        else
        {
           cout<<"Edge doest not exist"<<endl;
        }
    }

    return 0;
}

