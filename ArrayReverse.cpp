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

    int m;
    cin>>m;
    int b[m];

    for(int i=0;i<m;i++)
    {
        cin>>b[i];
    }

    int c[n+m];
    int k = 0,i=0,j=0;

    while(i<n && j<m)
    {
       if(a[i]<b[j])
       {
           c[k++] = a[i];
           i++;
       }
       else
       {
           c[k++] = b[j];
           j++;
       }
    }

    while(i<n)
    {
        c[k++] = a[i];
        i++;
    }

    while(j<m)
    {
        c[k++] = b[j];
        j++;
    }

    for(int i=0;i<n+m;i++)
    {
        cout<<c[i]<<" ";
    }

    cout<<endl;

    return 0;
}

