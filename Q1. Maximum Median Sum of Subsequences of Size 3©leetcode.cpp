#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
int main()
{
    optimize();
    vector<int> v={1000000000,1,1};
    sort(v.begin(),v.end());
    int sum = 0;
    while(v.size()!=0)
    {
        auto val = max_element(v.begin(),v.begin()+3);
        sum+=*val;
        v.erase(v.begin(),v.begin()+3);
    }

    cout<<sum<<endl;

    return 0;
}

