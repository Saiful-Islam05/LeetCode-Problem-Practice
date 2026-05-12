#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
int main()
{
    optimize();
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    vector<int> v;

    for(int i=0,j=n-1;i<j;i++,j--)
    {
        //cout<<a[i]<<"  "<<a[j]<<endl;
        swap(a[i],a[j]);
        v.push_back(a[i]);
    }

    for(auto u: v)
    {
        cout<<u<<" ";
    }
    cout<<endl;

    return 0;
}

