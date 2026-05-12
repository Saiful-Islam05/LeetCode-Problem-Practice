#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
    const int mx = 1e3+123;
    int dp[mx][mx];
    int n1,n2;
    string s1,s2;

    int solve(int i, int j)
    {
        if(i>=n1 || j>=n2)
        {
            return 0;
        }

        if(dp[i][j]!=-1)
        {
            return dp[i][j];
        }

        int res = 0;

        if(s1[i]==s2[j])
        {
            res = 1+solve(i+1,j+1);
        }
        else
        {
            res = max(solve(i,j+1),solve(i+1,j));
        }

        return dp[i][j] = res;
    }

int main()
{
    optimize();
    cin>>s1>>s2;
    n1 = s1.size();
    n2 = s2.size();

    memset(dp,-1,sizeof(dp));
    cout<<solve(0,0)<<endl;

    return 0;
}

