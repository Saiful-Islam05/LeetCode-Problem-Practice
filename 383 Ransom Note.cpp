#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
int main()
{
    optimize();
    int cnt;
    string ransomNote,magazine;
    cin>>ransomNote>>magazine;
    map<char,int> mp;
    for(int i=0;i<magazine.size();i++)
    {
        mp.insert{magazine[i]};
        mp[magazine[i]]++;
    }

    cout<<mp.size()<<endl;

    return 0;
}

