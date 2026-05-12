#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
int main()
{
    optimize();
    int a[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

    int transpose[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            transpose[i][j] = a[j][i];
        }
    }

     for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
           cout<<transpose[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    return 0;
}

