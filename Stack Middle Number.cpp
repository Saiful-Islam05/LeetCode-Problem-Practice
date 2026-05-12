#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
int main()
{
    optimize();
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    stack<int> result;
    int n = st.size();
    int cnt = -1;
    while(!st.empty())
    {
        cnt++;
        if(n/2==cnt)
        {
            st.pop();
            continue;
        }
        result.push(st.top());
        st.pop();

    }

    while(!result.empty())
    {

        cout<<result.top()<<" ";
         result.pop();
    }

    cout<<endl;


    return 0;
}

