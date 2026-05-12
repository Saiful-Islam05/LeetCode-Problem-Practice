#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
int main()
{
    optimize();

    vector<int> nums = {1,2,3,4};

    vector<int> res;
    for(int i=0; i<nums.size()-1; i++)
    {
        if(nums[i]<=nums[i+1])
        {
            if(nums[i+1]>nums[i])
            {
                res.push_back(nums[i]);
            }

            else
            {
                res.clear();
            }
        }
    }

    res.push_back(nums.size()-1);

    int ans = 0;

    ans = nums.size()-res.size();

    cout<<ans<<endl;

    return 0;
}

