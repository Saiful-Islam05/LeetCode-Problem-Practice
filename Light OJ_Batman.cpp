#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

    const int mx = 50+123;
    int dp[mx][mx][mx];
    int n1,n2,n3;
    string s1,s2,s3;

    int solve(int i,int j,int k)
    {
        if(i>=n1 || j>=n2  || k>=n3)
        {
            return 0;
        }

        if(dp[i][j][k]!=-1)
        {
            return dp[i][j][k];
        }

        int ret = 0;

        if(s1[i]==s2[j] && s2[j]==s3[k])
        {
            ret = 1+solve(i+1,j+1,k+1);
        }
        else
        {
            int ret1 = solve(i+1,j,k);
            int ret2 = solve(i,j+1,k);
            int ret3 = solve(i,j,k+1);

            ret = max({ret1,ret2,ret3});

        }
        return dp[i][j][k] = ret;

    }
int main()
{
    optimize();
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>s1>>s2>>s3;
        n1 = s1.size();
        n2 = s2.size();
        n3 = s3.size();
        memset(dp,-1,sizeof(dp));

        int ans = solve(0,0,0);
        cout<<"Case "<<i<<": "<<ans<<endl;
    }

    return 0;
}

