#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
int main()
{
    optimize();
    int a[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

    int sr = 0,er = 3-1;
    int sc = 0,ec = 3-1;

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    while(sr<=er &&  sc<=ec)
    {
        //Top
        for(int j=sc;j<=ec;j++)
        {
            cout<<a[sr][j]<<" ";
        }

        //Right
        for(int i=sr+1;i<=er;i++)
        {
            cout<<a[i][ec]<<" ";
        }

        //Bottom
        for(int j=ec-1;j>=sc;j--)
        {
            cout<<a[er][j]<<" ";
        }

        //Left
        for(int i=er-1;i>=sr+1;i--)
        {
            cout<<a[i][sc]<<" ";
        }

        sr++;
        er--;
        sc++;
        ec--;
    }

    return 0;
}

