class Solution {
public:
    int dfs(int x,int y, vector<vector<int>> & matrix,vector<vector<int>>& dp)
    {
        if(dp[x][y]!=-1)
        {
            return dp[x][y];
        }

        int n = matrix.size();
        int m = matrix[0].size();

        int dx[] = {0,0,1,-1};
        int dy[] = {1,-1,0,0};

        int cur = 1;

        for(int i=0;i<4;i++)
        {
            int a = dx[i]+x;
            int b = dy[i]+y;

            if(a>=0 && a<n && b>=0 && b<m && matrix[a][b]> matrix[x][y])
            {
                cur = max(cur,dfs(a,b,matrix,dp)+1);
            }
        }

        return dp[x][y] = cur;
    }
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();

        //dp.resize(n);
        vector<vector<int>> dp(n,vector<int>(m,-1));

        int res = 0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                int cnt = dfs(i,j,matrix,dp);
                res = max(res,cnt);
            }
        }

        return res;
    }
};