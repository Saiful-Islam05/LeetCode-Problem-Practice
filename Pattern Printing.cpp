#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
int main()
{
    optimize();
    int n;
    cin>>n;
    int space = 1;
    int k = 1;

    for(int i=0;i<=n;i++)
    {
        for(int j=k;j<=n;j++)
        {
            cout<<j;
        }
        for(int j=1;j<=space;j++)
        {
            cout<<" ";
        }
        for(int j=n;j>=k;j--)
        {
            cout<<j;
        }
        cout<<endl;
        k++;
        space+=2;
    }

    return 0;
}

