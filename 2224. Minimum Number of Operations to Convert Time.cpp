#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
int main()
{
    optimize();
    string currentMinutes,correctMinutes;
    cin>>currentMinutes>>correctMinutes;


    int curr = ((currentMinutes[0]-'0')*10+(currentMinutes[1]-'0'))*60 + (currentMinutes[3]-'0')*10+(currentMinutes[4]-'0');
    int corr = ((correctMinutes[0]-'0')*10+(correctMinutes[1]-'0'))*60 + (correctMinutes[3]-'0')*10+(correctMinutes[4]-'0');

    int rem = corr-curr;

    int cnt = 0;

    while(rem>=60)
    {
        rem-=60;
        cnt++;
    }

    while(rem>=15)
    {
        rem-=15;
        cnt++;
    }

    while(rem>=5)
    {
        rem-=5;
        cnt++;
    }

    while(rem>=1)
    {
        rem-=1;
        cnt++;
    }

    cout<<cnt<<endl;
    return 0;
}
