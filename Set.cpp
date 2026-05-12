#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
int main()
{
    optimize();
    vector<int> nums = {1,2,3,5,8,15,15,3};
    unordered_set<int> us;
    for(int u: nums)
    {
        us.insert(u);
    }

    for(auto u: us)
    {
        cout<<u<<" ";
    }
    cout<<endl;

    return 0;
}

