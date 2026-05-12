#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
int main()
{
    optimize();
      string s;
    getline(cin, s);
    int len = s.size();
    deque<string> ans;
    string word;
    for(int i=0;i<len;i++)
    {
        if(s[i]==' ')
        {
            if(!word.empty())
            {
                 ans.push_front(word);
                 word.clear();
            }

        }
        else
        {
            word+=s[i];
        }

    }

    if(!word.empty())
    {
        ans.push_front(word);
    }

    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i];
        if(i!=ans.size()-1)
        {
            cout<<' ';
        }
    }
    cout<<endl;



    return 0;
}
