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
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int cnt = 1;
    int ans = 1;
    for(int i=0;i<n-1;i++)
    {
       if(a[i]<a[i+1])
       {
           cnt++;
           ans = max(ans,cnt);
       }
       else
       {
           cnt=1;
       }
    }

    cout<<ans<<endl;

    return 0;
}

