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

    map<char,int> freq;
    priority_queue<pair<char,int>> pq;

    for(auto u: s)
    {
        freq[u]++;
    }

    for(auto it = freq.begin();it!=freq.end();it++)
    {
        if(it->second>0)
        {
            pq.push({it->first,it->second});
        }
    }

    string ans;

    while(!pq.empty())
    {
        char currentCh = pq.top().first;
        int currentCnt = pq.top().second;
        pq.pop();

        int  work = min(currentCnt,repeatLimit);
        ans.append(work,currentCh);

        currentCnt-=work;

        if(currentCnt>0)
        {
            if(!pq.empty()){
            char nextCh = pq.top().first;
            int nextCnt = pq.top().second;
            pq.pop();

            ans.push_back(nextCh);
            nextCnt--;

            if(nextCnt>0)
            {
                pq.push({nextCh,nextCnt});
            }

            pq.push({currentCh,currentCnt});

            }
        }
    }

    cout<<ans<<endl;

    return 0;
}

