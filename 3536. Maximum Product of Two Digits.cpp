#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
int main()
{
    optimize();
    int n;
    cin>>n;
    string s = to_string(n);
    int result = 1;

    for(int i=0;i<s.size();i++)
    {

        int value = s[i] - '0';
        result*=value;
    }

    cout<<result<<endl;

    return 0;
}

