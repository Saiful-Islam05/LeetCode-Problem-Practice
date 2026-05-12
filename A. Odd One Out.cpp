#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
int main()
{
    optimize();
    int t;
    cin>>t;
    while(t--)
    {
        int a[3];
        int ans=0;
        map<int,int> mp;
        for(int i=0;i<3;i++)
        {
            cin>>a[i];
            mp[a[i]]++;
        }

        for(auto u: mp)
        {
            int value= u.first;
            int frequency = u.second;
            if(frequency==1)
            {
                ans = value;
            }
        }

        cout<<ans<<endl;
    }

    return 0;
}

