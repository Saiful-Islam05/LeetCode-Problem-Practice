#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
int main()
{
    optimize();
    int a,b,c;
    cin>>a>>b>>c;
    priority_queue<int> pq;
    pq.push(a);
    pq.push(b);
    pq.push(c);

    cout<<pq.top()<<endl;


    return 0;
}

