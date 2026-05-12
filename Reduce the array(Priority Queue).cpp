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
        long long n,a1=0,b1=0,ans=0;
        cin>>n;
        int a[n];
        priority_queue<long long> pq;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            pq.push(-a[i]);
        }

        while(pq.size()>1)
        {
            a1 = -pq.top();
            pq.pop();

            b1 = -pq.top();
            pq.pop();

            pq.push(-(a1+b1));
            ans+=a1+b1;
        }
        cout<<ans<<endl;
    }

    return 0;
}

