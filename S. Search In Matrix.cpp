#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
int main()
{
    optimize();
    int n,m,x;
    cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    cin>>x;

    bool isFind = false;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(a[i][j]==x)
            {
                isFind = true;
            }

        }
    }

    if(isFind)
    {
        cout<<"will not take number"<<endl;
    }
    else
    {
        cout<<"will take number"<<endl;
    }

    return 0;
}

