#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
int main()
{
    optimize();
    int m,n;
    cin>>m>>n;
    int a[m];
    priority_queue<long long> pq;
    long long ans = 0;
    for(int i=0;i<m;i++)
    {
        cin>>a[i];
        pq.push(a[i]);
    }

    for(int i=0;i<n;i++)
    {
        if(!pq.empty())
        {
            int tmp = pq.top();
            pq.pop();

            ans+=tmp;
            tmp--;
            if(tmp>0)
            {
                 pq.push(tmp);
            }

        }
    }

    cout<<ans<<endl;

    return 0;
}

