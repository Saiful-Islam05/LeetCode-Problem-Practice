#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
    const int mx = 2e5+123;
    int a[mx];
    const int inf = 2000000000;
int main()
{
    optimize();
    int n;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    vector<int> d(n+1,inf);
    vector<int> id(n+1,-1);
    vector<int> p(n,-1);

    d[0] = -inf;


    for(int i=0;i<n;i++)
    {
        int j = upper_bound(d.begin(),d.end(),a[i]) - d.begin();
        if(d[j-1]<a[i])
        {
            d[j] = a[i];
            id[j] = i;
            p[i] = id[j-1];
        }
    }

    int ans = 0;

    for(int i=1;i<=n;i++)
    {
        if(d[i]!=inf)
        {
            ans = i;
        }
    }

    cout<<ans<<endl;
    int  curr = id[ans];

    vector<int> lis;

    while(curr!=-1)
    {
        lis.push_back(a[curr]);
        curr = p[curr];
    }

    reverse(lis.begin(),lis.end());
    for(auto u: lis)
    {
        cout<<u<<" ";
    }

    cout<<endl;

    return 0;
}

