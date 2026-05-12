#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
int main()
{
    optimize();
    int R=0,L=0,cnt=0;
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='R')
        {
            R++;
        }
        if(s[i]=='L')
        {
            L++;
        }

        if(R==L)
        {
            R=0;
            L=0;
            cnt++;
        }
    }

    cout<<cnt<<endl;

    return 0;
}

