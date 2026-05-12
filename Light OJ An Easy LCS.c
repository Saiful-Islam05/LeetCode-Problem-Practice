#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

    const int mx = 123;
    string s1,s2;
    int n1,n2;

    string dp[mx][mx];
    bool vis[mx][mx];

    string select(string p1,string p2)
    {
        if(p1.size()==p2.size())
        {
            if(p1<p2)
            {
                return p1;
            }
            else
            {
                return p2;
            }
        }
        else
        {
            if(p1.size()>p2.size())
            {
                return p1;
            }
            else
            {
                return p2;
            }
        }

    }



    string solve(int i,int j)
    {
        if(i>=n1 || j>=n2)
        {
            return "";
        }
        if(vis[i][j]==1)
        {
            return dp[i][j];
        }
        vis[i][j] = 1;

        int ret;

        if(s1[i]==s2[j])
        {
            ret = s1[i]+solve(i+1,j+1);
        }
        else
        {
            int ret1 = solve(i+1,j);
            int ret2 = solve(i,j+1);


            ret = select(ret1,ret2);
        }

        return dp[i][j] = ret;
    }

int main()
{
    optimize();
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>s1>>s2;
        n1 = s1.size();
        n2 = s2.size();

        for(int i=0;i<n1;i++)
        {
            for(j=0;j<n2;j++)
            {
                dp[i][j].clear();
                vis[i][j] = 0;
            }
        }

        string ans = solve(0,0);
        if(ans.size()==0)
        {
            ans = ":(";
        }

        cout<<"Case "<<t<<": "<<ans<<endl;
    }

    return 0;
}

