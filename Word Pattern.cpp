#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
int main()
{
    optimize();
    string pattern = {"aaaa"};
    string s = {"dog cat cat dog"};

    stringstream ss(s);

    vector<string> words;
    string word;

    while(ss>>word)
    {
        words.push_back(word);
    }

    if(words.size()!=pattern.size())
    {
        cout<<"False"<<endl;
        return 0;
    }

    unordered_map<char,string> charToString;
    unordered_map<string,char> stringToChar;

    for(int i=0;i<pattern.size();i++)
    {
        char c = pattern[i];
        string w = words[i];

        //Mismatch Checks
        if(charToString.count(c) && charToString[c]!=w)
        {
            cout<<"False"<<endl;
            return 0;
        }
        if(stringToChar.count(w) && stringToChar[w]!=c)
        {
            cout<<"False"<<endl;
            return 0;
        }

        charToString[c] = w;
        stringToChar[w] = c;
    }

    cout<<"True"<<endl;


    return 0;
}

