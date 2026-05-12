#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n';
int main()
{
    optimize();
    string s;
    int cnt=0,fcnt=0,maxi=0,mini=0;
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
        if(isupper(s[i]))
        {
            maxi++;
        }
        if(islower(s[i]))
        {
            mini++;
        }
        if(isupper(s[0]))
        {
            fcnt=1;
        }
    }

    if(maxi==s.length() || mini==s.length()||fcnt==1&&mini==s.length()-1)
    {
        cout<<"true"<<endl;
    }
    else
    {
        cout<<"false"<<endl;
    }

    return 0;
}

