#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
int main()
{
    optimize();
    string inputString = "A man, a plan, a canal: Panama";
    string resultString;

    for (char c : inputString) {
        if (isalnum(c)) {
            resultString += tolower(c);
        }
    }
    string s1 = resultString;
    reverse(resultString.begin(),resultString.end());

   if(s1==resultString)
   {
       cout<<"Palindrome"<<endl;
   }
   else
   {
       cout<<"Not Palindrome"<<endl;
   }

    return 0;
}
