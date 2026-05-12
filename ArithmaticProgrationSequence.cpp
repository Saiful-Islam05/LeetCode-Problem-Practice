#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,cnt=0,wrong=0;
    cin>>n;
    int A[n];
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
        v.push_back(A[i]);
    }

    int x = v[1]-v[0];

    for(int i=2;i<n;i++)
    {
        if(v[i]-v[i-1]!=x)
        {
            wrong=1;
        }
        else
        {
            int cnt=cnt+1;
        }
    }

    if(wrong>0)
    {
        cout<<"False"<<endl;
    }
    else
    {
        cout<<"True"<<endl;
    }
    return 0;
}
