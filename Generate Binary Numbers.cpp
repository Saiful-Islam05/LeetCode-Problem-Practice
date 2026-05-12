#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
int main()
{
    optimize();
    vector<int> v = {1,2,3,4,5,6,7,8};
    queue<int> res;

    for(int i=0,j=v.size()/2;i<v.size()/2,j<v.size();i++,j++)
    {
        res.push(v[i]);
        res.push(v[j]);
    }

    while(!res.empty())
    {
        cout<<res.front()<<" ";
        res.pop();
    }

    cout<<endl;

    return 0;
}

