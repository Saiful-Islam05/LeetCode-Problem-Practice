#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
int main()
{
    optimize();
    string s;
    cin>>s;
    int cnt=0;
    vector<int> v;
    for(int i=0;i<s.length();i++)
    {
        cnt=0;
       for(int j=0;j<s.length();j++)
       {
           if(s[j]=='1')
           {
               cnt+=abs(i-j);

           }
       }
       v.push_back(cnt);
    }

    for(auto u: v)
    {
        cout<<u<<" ";
    }

    cout<<endl;
    return 0;
}

