#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
int main()
{
    optimize();
    int t;
    cin>>t;
    while(t--)
    {
        int cnt=0;
        string s1,s2,s3;
        char a='A',b='B',c='C',ans;
        cin>>s1>>s2>>s3;
        bool A=false,B=false,C=false;
        for(int i=0; i<3; i++)
        {
            if(s1[i]==a)
            {
                A=true;
            }
            if(s1[i]==b)
            {
                B=true;
            }
            if(s1[i]==c)
            {
                C=true;
            }
        }

        if(A==false)
        {
            ans=a;
        }
        else if(B==false)
        {
            ans=b;
        }
        else if(C==false)
        {
            ans=c;
        }
        else
        {
            A=false,B=false,C=false;
            for(int i=0; i<3; i++)
            {
                if(s2[i]==a)
                {
                    A=true;
                }
                else if(s2[i]==b)
                {
                    B=true;
                }
                else if(s2[i]==c)
                {
                    C=true;
                }
            }

            if(A==false)
            {
                ans=a;
            }
            else if(B==false)
            {
                ans=b;
            }
            else if(C==false)
            {
                ans=c;
            }
            else
            {
                A=false,B=false,C=false;

                for(int i=0; i<3; i++)
                {
                    if(s3[i]==a)
                    {
                        A=true;
                    }
                    else if(s3[i]==b)
                    {
                        B=true;
                    }
                    else if(s3[i]==c)
                    {
                        C=true;
                    }
                }

                if(A==false)
                {
                    ans=a;
                }
                else if(B==false)
                {
                    ans=b;
                }
               else if(C==false)
                {
                    ans=c;
                }

            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
