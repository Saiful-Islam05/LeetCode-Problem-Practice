#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
int main()
{
    optimize();
    int n;
    cin>>n
    int nums[n];
    int even=0,odd=0;
    for(int i=0;i<n;i++)
    {
        cin>>nums[i];
    }

   for(int i=0;i<n;i+=2)
    {
        if(i==0)
        {
            if(nums[i]>=nums[i+1])
            {
                even+= nums[i]-nums[i+1]+1;
            }
        }
    }

    return 0;
}

