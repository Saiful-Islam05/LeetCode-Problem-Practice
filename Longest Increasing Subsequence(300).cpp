#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

    const int mx = 2512;
    vector<int> a;
    int dp[mx],n;


    int solve(int i)
    {
        if(i>=n)
        {
            return 0;
        }
        if(dp[i]!=0)
        {
            return dp[i];
        }

        int ret = 0;

        for(int j=i+1;j<n;j++)
        {
            if(a[i]<a[j])
            {
                ret = max(ret,1+solve(j));
            }
        }

        return dp[i] = ret;
    }


int main()
{
    optimize();
    n = nums.size();
    a = nums;
    memset(dp,-1,sizeof(dp));

    int ans=0;
    for(int i=0;i<n;i++)
    {
        ans = max(ans,1+solve(i));
    }
    return ans;

    return 0;
}

