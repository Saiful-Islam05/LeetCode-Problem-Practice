#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
int main()
{
    optimize();
    string s;
    vector<int> val;
    set<int> myset;
    int n;
    char c;
    cin>>n;
    cin>>c;
    for(int i=0;i<n;i++)
    {
        cin>>s;
        for(int j=0;j<s.length();j++)
        {
            if(s[j]==c)
            {
                val.push_back(i);
            }
            else
            {
                continue;
            }
        }
    }

  for(auto u: val)
  {

      myset.insert(u);
  }

  for(auto q: myset)
  {
      cout<<q<<" ";
  }

  cout<<endl;



    return 0;
}

