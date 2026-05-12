#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
int main()
{
    optimize();

    string s;
    cin>>s;

    unordered_map<char,int> freq;
    for(auto u: s)
    {
        freq[u]++;
    }

    priority_queue<pair<int,char>>pq;

    for(auto i: freq)
    {
        pq.push({i.second,i.first});
    }

    string res = "";

    while(!pq.empty())
    {
        res.append(pq.top().first,pq.top().second);
        pq.pop();
    }

    cout<<res<<endl;

    return 0;
}

