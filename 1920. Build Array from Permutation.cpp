#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
int main()
{
    optimize();
    int n;
    cin>>n;
    int a[n];
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i]==j)
            {
                v.push_back(a[j]);
                break;
            }
        }
    }

    for(auto u: v)
        {
            cout<<u<<" ";
        }
        cout<<endl;

    return 0;
}

