#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
int main()
{
    optimize();
    deque<int> dq = {1,2,3,4,5};
    dq.pop_front();

    for(auto u: dq)
    {
        cout<<u<<" ";
    }
    cout<<endl;

    return 0;
}

