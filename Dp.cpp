#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
int main()
{
    optimize();
    int n;
    cin>>n;
    int curr = n,onePrev,twoPrev;
    onePrev = 1;
    twoPrev = 0;

    for(int i=2;i<=n;i++)
    {
        curr = onePrev+twoPrev;
        twoPrev = onePrev;
        onePrev = curr;
    }

    cout<<curr<<endl;

    return 0;
}

