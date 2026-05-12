#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

    bool isValid(int i,int j,int n,int m)
    {
         if(i>=0 && i<n && j>=0 &&  j<m)
         {
             return true;
         }
         else
         {
             return false;
         }
    }

int main()
{
    optimize();
    int n,m;
    cin>>n>>m;
    char a[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }

    int x,y;
    cin>>x>>y;
    x--;
    y--;
    int dx[] = {0,0,-1,1,-1,1,-1,1};
    int dy[] = {1,-1,0,0,1,1,-1,-1};
    bool ans = true;
    for(int i=0;i<8;i++)
    {
        int ni = x+dx[i];
        int nj = y+dy[i];
        if(isValid(ni,nj,n,m) && a[ni][nj]!='x')
        {
            ans = false;
        }
    }

    if(ans)
    {
        cout<<"yes"<<endl;
    }
    else
    {
        cout<<"no"<<endl;
    }
    return 0;
}

