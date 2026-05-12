#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

const int mx = 1002;
char adjMat[mx][mx];

int main()
{
    optimize();
    int n,m;
    scanf("%d%d",&n,&m);

    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<m;j++)
        {
           // scanf(" %c",&adjMat[i][j]);
           scanf("%s",adjMat[i]);
        }
    }

    cout<<endl<<"My adjMat : \n";

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cout<<adjMat[i][j];
        }
        cout<<endl;
    }

    return 0;
}

