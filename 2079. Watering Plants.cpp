#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
int main()
{
    optimize();
    int n,capacity;
    cin>>n>>capacity;
    int a[n],cnt=0;
    int currValue = capacity;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(int i=0;i<n;i++)
    {
        if(a[i]<=currValue)
        {
            if(i==0)
            {
                cnt+= abs((-1)-i);
            }
            else
            {
                cnt+=abs((i-1)-i);
            }

            currValue-=a[i];
        }
        else
        {
            cnt+=(abs(i-(-1)))-1;
            currValue = capacity;
            if(a[i]<=currValue)
            {
                 cnt+= abs((-1)-i);
            }
            currValue-=a[i];

        }
    }

    cout<<cnt<<endl;



    return 0;
}

