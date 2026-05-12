#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
int main()
{
    optimize();
    int m, n, p;
    cin >> m >> n;
    int A[m][n];
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cin >> A[i][j];
        }
    }
    cin >> n >> p;
    int B[n][p];
    int C[m][p];
    memset(C, 0, sizeof(C));
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < p; ++j)
        {
            cin >> B[i][j];
        }
    }

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<p;j++)
        {
            for(int k=0;k<n;k++)
            {
                C[i][j] +=A[i][k] * B[k][j];
            }
        }
    }

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<p;j++)
        {
            cout<<C[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}

