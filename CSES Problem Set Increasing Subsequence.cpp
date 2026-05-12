#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
int main()
{
    optimize();
    int n;
    int inf = INT_MAX;
    cin>>n;
    int a[n];
    vector<int> v(n+1,inf);
    v[0] = -inf;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(int i=0;i<n;i++)
    {
        int j = upper_bound(v.begin(),v.end(),a[i]) - v.begin();

        if(a[i]>v[j-1])
        {
            v[j] = a[i];
        }
    }
    int ans = 0;

    for(int i=1;i<=n;i++)
    {
        if(v[i]!=inf)
        {
            ans = i;
        }
    }

    cout<<ans<<endl;

    return 0;
}

