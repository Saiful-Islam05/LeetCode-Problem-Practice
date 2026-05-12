#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
int main()
{
    optimize();
    stack<string> st;
    st.push("Saiful Islam is a Talented Software Engineer.");
    stringstream ss(st.top());

    string word;
    stack<string> result;
    while(ss>>word)
    {
        result.push(word);
    }

    while(!result.empty())
    {
        cout<<result.top()<<endl;
        result.pop();
    }

    return 0;
}

