#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
int main()
{
    optimize();
    stack<int> st;

    st.push(5);
    st.push(4);
    st.push(3);
    st.push(2);
    st.push(1);

    stack<int> st2;

    while(!st.empty())
    {
        st2.push(st.top());
        st.pop();
    }

    while(!st2.empty())
    {
        cout<<st2.top()<<" ";
        st2.pop();
    }

    cout<<endl;

    return 0;
}

