#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
int main()
{
    optimize();

    int nums[] = {18,43,34,16};
    int n = sizeof(nums) / sizeof(nums[0]); // ✅ Array Size নির্ণয়
    vector<string> v;

    for(int i=0; i<n; i++)
    {
        v.push_back(to_string(nums[i]));
    }

    vector<int> result;

    for(int i=0;i<v.size();i++)
    {
        int cnt=0;
        for(int j=0;j<v[i].size();j++)
        {
            cnt+= v[i][j] - '0';
        }

        result.push_back(cnt);
    }

    int t = 0;

   for (int i = 0; i < result.size() - 1; i++)
    {
        for (int j = 0; j < result.size() - i - 1; j++)
        {
            if (result[j] > result[j + 1])
            {
                swap(result[j], result[j + 1]);
                t++;
            }
        }
    }
    cout<<t<<endl;

    return 0;
}

