#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
    const int mx = 1e3+123;
    int dp[mx][mx];
    string s1,s2;
    int n1,n2;


    int solve(int i,int j)
    {
        //base case
        if(i>=n1 || j>=n2)
        {
            return 0;
        }
        //if Already calculate
        if(dp[i][j]!=-1)
        {
            return dp[i][j];
        }

        int ans = 0;

        //If both character are same
        if(s1[i]==s2[j])
        {
            ans = 1+solve(i+1,j+1);
        }
        //If don't match
        else
        {
            ans = max(solve(i,j+1),solve(i+1,j));
        }

        return dp[i][j] = ans;
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

