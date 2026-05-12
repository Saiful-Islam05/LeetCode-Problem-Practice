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
    set<int> st;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        s.push_back(to_string(a[i]));
    }

    /*
    string s = to_string(a[0]);
    reverse(s.begin(),s.end());
    cout<<s<<endl;
    */

    for(int i=0;i<n;i++)
    {
        reverse(s[i].begin(),s[i].end());

        v.push_back(s[i]);
    }

    int t = stoi(s[0]);
    for(auto u: v)
    {
        cout<<u<<" ";
    }
    cout<<endl;

    cout<<"Integer = "<<t<<endl;

    return 0;
}

