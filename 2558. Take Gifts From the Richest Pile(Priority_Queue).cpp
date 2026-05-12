#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
int main()
{
    optimize();

    priority_queue<int> pq;
    vector<int> gifts={25,64,9,4,100};

    for(auto u: gifts)
    {
        pq.push(u);
    }

    while(!pq.empty())
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }
    cout<<endl;


    return 0;
}

