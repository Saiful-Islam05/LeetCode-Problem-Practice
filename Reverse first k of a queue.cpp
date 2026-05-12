#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
int main()
{
    optimize();
    int n,k;
    cin>>n>>k;
    queue<int> q;
    for(int i=0; i<n; i++)
    {
        int a;
        cin>>a;
        q.push(a);
    }

    stack<int> st;
    while(!q.empty() && k>0)
    {
        k--;
        st.push(q.front());
        q.pop();
    }

    while(!st.empty())
    {
        //cout<<st.top()<<" ";
        q.push(st.top());
        st.pop();
    }

    for(int i=0;i<n-k;i++)
    {
        q.push(q.front());
        q.pop();
    }

    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;



    return 0;
}

