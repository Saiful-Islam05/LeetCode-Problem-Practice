#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    int a,n,x;
    cin>>a;
    while(a--)
    {
        cin>>n>>x;
        int A[n];

        for(int i=0;i<n;i++)
        {
            cin>>A[i];
            v.push_back(A[i]);
        }
        sort(v.begin(),v.end());
        int b = unique(v.begin(),v.end());

        if(x==b)
        {
            cout<<"Good"<<endl;
        }
        else if(b<x)
        {
            cout<<"Bad"<<endl;
        }
        else if(b>x)
        {
            cout<<"Average"<<endl;
        }

    v.clear();
    }
    return 0;
}
