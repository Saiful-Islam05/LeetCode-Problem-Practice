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
    priority_queue<int> q;
    int a1=0,a2=0,a3=0;
    for(int i=0;i<n;i++)
    {
        q.push(a[i]);
        if(q.size()>=3)
        {
            a1 = q.top();
            q.pop();

            a2 = q.top();
            q.pop();

            a3 = q.top();
            q.pop();

            q.push(a1);
            q.push(a2);
            q.push(a3);

            cout<<a1*a2*a3<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
    }

    return 0;
}

