#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

    int dx[] = {1,-1,0,0};
    int dy[] = {0,0,1,-1};


    void dfs(int x,int y,int n,int m,vector<vector<bool>>&isVisited,vector<vector<int>> &grid)
    {
        isVisited[x][y] = true;

        for(int i=0;i<4;i++)
        {
            int nx = x+dx[i];
            int ny = y+dy[i];

            if(nx>=0 && ny>=0 && nx<n && ny<m && grid[nx][ny]==1 && !isVisited[nx][ny])
            {
                dfs(nx,ny,n,m,isVisited,grid);
            }
        }
    }


int main()
{
    optimize();
    vector<vector<int>> grid = {{1,1,0,1},{0,1,0,1},{1,1,1,0},{1,1,0,1}};

    int n = grid.size();
    int m = grid[0].size();

    vector<vector<bool>> isVisited(n,vector<bool>(m,0));

    dfs(0,0,n,m,isVisited,grid);

    return 0;
}

