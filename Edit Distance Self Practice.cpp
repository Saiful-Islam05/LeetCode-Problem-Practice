#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
    const int mx = 5e3+123;
    int dp[mx][mx];
    int n,m;
    string s1,s2;


    int solve(int i,int j)
    {
        if(i>=n)
        {
            return m-j;
        }
        if(j>=m)
        {
            return n-i;
        }

        if(dp[i][j]!=-1)
        {
            return dp[i][j];
        }

        int ans;

        if(s1[i]==s2[j])
        {
            ans = solve(i+1,j+1);
        }
        else
        {
            int ret1 = 1+solve(i+1,j+1); //Replace
            int ret2 = 1+solve(i+1,j); //Delete
            int ret3 = 1+solve(i,j+1); //Insert

            ans = min({ret1,ret2,ret3});
        }

        return dp[i][j] = ans;
    }
int main()
{
    optimize();
    cin>>s1>>s2;
    n = s1.size();
    m = s2.size();

    memset(dp,-1,sizeof(dp));

    cout<<solve(0,0)<<endl;

    return 0;
}

