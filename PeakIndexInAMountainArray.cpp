#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        v.push_back(a[i]);
    }

    int p = max_element(v.begin(),v.end()) - v.begin();
    cout<<p<<endl;

    return 0;
}
