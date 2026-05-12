#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

const int mx = 3e4+123;
int coin[] = {1,5,10,25,50};
long long dp[6][mx];

long long solve(int i,int n)
{
    if(i==5 || n==0)
    {
        return(n==0);
    }
    if(dp[i][n]!=-1)
    {
        return dp[i][n];
    }

    long long ret = 0;

    for(int j=0;j<=n;j++)
    {
        if(n-(j*coin[i])>=0)
        {
            ret+=solve(i+1,n-(j*coin[i]));
        }
        else
        {
            break;
        }
    }

    return dp[i][n]=ret;
}
int main()
{
    optimize();
    int n;
    while(cin>>n){
        memset(dp,-1,sizeof(dp));
        cout<<solve(0,n)<<endl;
    }

    return 0;
}
