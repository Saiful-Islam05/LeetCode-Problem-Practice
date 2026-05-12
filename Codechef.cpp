#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }

        int mini1 = *min_element(v.begin(),v.end());
        int mini2 = INT_MAX;
        int result = 0;
        for(int i=0;i<n;i++)
        {
            if(v[i]<mini2 && v[i]>mini1)
            {
                mini2 = v[i];
            }
        }

        result = mini1+mini2;

        for(int i=0;i<n-1;i++)
        {
            if((v[i]+(v[i+1]/2))<result)
            {
                result = v[i]+(v[i+1]/2);
            }
        }

        cout<<result;



    }
}

