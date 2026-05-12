#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
int main()
{
    optimize();
    int n,cnt=0,ans=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    sort(a,a+n);

    for(int i=n-1;i>=n/3;i--)
    {
        cnt++;
        if(cnt==2)
        {
            cnt=0;
            ans+=a[i];

        }
    }

    cout<<ans<<endl;

    return 0;
}

