#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
int main()
{
    optimize();
    string s;
    int repeatLimit;
    cin>>s;
    cin>>repeatLimit;
    int sz = s.size();

    map<char,int> freq;
    priority_queue<pair<char,int>> pq;

    for(auto u: s)
    {
        freq[u]++;
    }

    for(auto it=freq.begin();it!=freq.end();it++)
    {
        if(it->second>0)
        {
            pq.push({it->first,it->second});
        }
    }

    string result;

    while(!pq.empty())
    {
        char ch = pq.top().first;
        int cnt = pq.top().second;
        pq.pop();
        int use = min(repeatLimit,cnt);

        result.append(use,ch);
        cnt-=use;

        if(cnt>0)
        {
            if(!pq.empty())
            {
                char nextCh = pq.top().first;
                int nextCount = pq.top().second;
                pq.pop();
                result.push_back(nextCh);

                nextCount--;
                if(nextCount>0)
                {
                    pq.push({nextCh,nextCount});
                }

                pq.push({ch,cnt});
            }
        }
    }

    cout<<result<<endl;

    return 0;
}

