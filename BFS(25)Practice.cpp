#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
int main()
{
    optimize();
    vector<vector<char>> grid = {
        {'#', '.', '.', '#', '#'},
        {'.', '.', '.', '.', '.'},
        {'.', '.', '.', '.', '#'},
        {'#', '.', '#', '#', '#'},
        {'#', '#', '.', '.', '.'}
    };

     int dx[] = {0,0,1-1};
    int dy[] = {1,-1,0,0};

    int n = grid.size();
    int m = grid[0].size();



   vector<vector<int>>level(n,vector<int>(m,-1));
    pair<int,int> s = {2,2};

   queue<pair<int,int>> q;

   q.push(s);

   level[s.first][s.second] = 0;



   while(!q.empty())
   {
       pair<int,int> u = q.front();
       q.pop();

       int x = u.first;
       int y = u.second;

       for(int i=0;i<4;i++)
       {
           int nx = x+dx[i];
           int ny = y+dy[i];


        if(nx>=0 && nx<n && ny>=0 && ny<m && grid[nx][ny]=='.' && level[nx][ny]==-1 )
       {
           level[nx][ny] = level[x][y]+1;

           q.push({nx,ny});
       }
       }
   }

   for(int i=0;i<n;i++)
   {

       for(int j=0;j<m;j++)
       {
           cout<<level[i][j]<<" ";
       }
       cout<<endl;
   }

    return 0;
}

