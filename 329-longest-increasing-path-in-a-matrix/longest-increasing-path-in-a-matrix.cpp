class Solution {
public:

    int dfs(int x,int y,vector<vector<int>> &matrix,vector<vector<int>> &dp)
    {
        int n = matrix.size();
        int m = matrix[0].size();

        if(dp[x][y]!=-1)
        {
            return dp[x][y];
        }

        int curDis = 1;

        int dx[] = {0,0,1,-1};
        int dy[] = {1,-1,0,0};

        for(int i=0;i<4;i++)
        {
            int a = x+dx[i];
            int b = y+dy[i];

            if(a>=0 && a<n && b>=0 && b<m && matrix[a][b]>matrix[x][y])
            {
                curDis = max(curDis,dfs(a,b,matrix,dp)+1);
            }
        }

        return dp[x][y] = curDis;
    }


    int longestIncreasingPath(vector<vector<int>>& matrix) {
       
        int n = matrix.size();
        int m = matrix[0].size();

        vector<vector<int>> dp(n,vector<int>(m,-1));

        int res=0;

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