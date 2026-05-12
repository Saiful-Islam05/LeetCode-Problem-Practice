#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

    int factorial(int n)
    {
        if(n==1)
        {
            return 1;
        }

        int res = n*factorial(n-1);

        return res;
    }

int main()
{
    optimize();
    int n;
    cin>>n;
    cout<<factorial(n)<<endl;

    return 0;
}

