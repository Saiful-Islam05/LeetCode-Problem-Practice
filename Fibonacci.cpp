#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

    int solve(int n)
    {
        if(n==0 || n==1)
        {
            return n;
        }

        int res = solve(n-1)+solve(n-2);

        return res;
    }



int main()
{
    optimize();
    int n;
    cin>>n;
    int result = solve(n);
    cout<<result<<endl;

    return 0;
}

