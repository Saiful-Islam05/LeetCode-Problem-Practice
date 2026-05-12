#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
int main()
{
    optimize();
    string s;
    int k,cnt1=1,cnt2=0;
    cin>>s>>k;
    char t1,t2;
    t1 = s[0];
    for(int i=1;i<s.length();i++)
    {
        if(s[i]==t1)
        {
            cnt1++;
        }
        else
        {
            if(k>0)
            {
                k--;
                cnt1++;
            }
            else
            {
                cnt1 = max(cnt1)
            }
        }
    }

    cout<<cnt1<<endl;

    return 0;
}

