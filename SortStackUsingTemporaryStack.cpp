#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
int main()
{
    optimize();
    int n;
    cin>>n;
    stack<int> inputSt;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        inputSt.push(x);
    }

    stack<int> sortedSt;

    while(!inputSt.empty())
    {
        int top = inputSt.top();
        inputSt.pop();

        while(!sortedSt.empty() && sortedSt.top()<top)
        {
            inputSt.push(sortedSt.top());
            sortedSt.pop();
        }

        sortedSt.push(top);
    }

    while(!sortedSt.empty())
    {
        cout<<sortedSt.top()<<" ";
        sortedSt.pop();
    }
    cout<<endl;

    return 0;
}

