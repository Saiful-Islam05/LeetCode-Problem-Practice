#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
int main()
{
    optimize();
    int n;
    cin>>n;
    vector<int> v(n);
    for(auto &u: v)
    {
        cin>>u;
    }

    vector<int> ans(n);
    stack<int> st;

    for(int i=n-1;i>=0;i--)
    {
        while(!st.empty() && st.top()<=v[i])
        {
            st.pop();
        }

        if(st.empty())
        {
            ans[i] = -1;
        }
        else
        {
            ans[i] = st.top();
        }

        st.push(v[i]);
    }

    for(auto u: ans)
    {
        cout<<u<<" ";
    }
    cout<<endl;

    return 0;
}

