#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
int main()
{
    optimize();
    priority_queue<int,vector<int>,greater<int>> q;

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    cout<<"Size = "<<q.size()<<endl;
    while(!q.empty())
    {
        cout<<q.top()<<endl;
        q.pop();
    }

    cout<<"Size = "<<q.size()<<endl;

    return 0;
}

