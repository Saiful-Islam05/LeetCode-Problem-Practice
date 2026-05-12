#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
int main()
{
    optimize();
    int n,k,amount;
    cin>>n>>amount;
    int a[n];

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int cnt=0, rem=0;

    sort(a,a+n);
    rem = amount;
    for(int i=n-1;i>=0;i--)
    {
        k = a[i];
        while(rem>=k)
        {
            rem-= k;
            cnt++;
        }
    }

  //  cout<<"Remember = "<<rem<<endl;
    if(rem!=0)
    {
        cout<<-1<<endl;
    }
    else
    {
          cout<<cnt<<endl;
    }


    return 0;
}

