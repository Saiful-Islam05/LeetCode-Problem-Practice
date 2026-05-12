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
    vector<string> s,v;
    vector<int> vec;
    set<int> st;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        vec.push_back(a[i]);
        s.push_back(to_string(a[i]));
    }
    for(int i=0;i<n;i++)
    {
        reverse(s[i].begin(),s[i].end());

        vec.push_back(stoi(s[i]));
    }
    for(auto u: vec)
    {
        st.insert(u);
    }
    cout<<st.size()<<endl;
    return 0;
}
