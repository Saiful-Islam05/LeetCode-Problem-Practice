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
        int n;
        cin>>n;
        priority_queue<ll>pq;

        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            pq.push(-a);
        }

        long long ans = 0;

        while(pq.size()>1)
        {
            long long a = -pq.top();
            pq.pop();

            long long b = -pq.top();
            pq.pop();

            pq.push(-(a+b));
            ans+=(a+b);
        }
        cout<<ans<<endl;
    }

    return 0;
}

