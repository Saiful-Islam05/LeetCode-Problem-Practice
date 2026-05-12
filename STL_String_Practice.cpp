#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
int main()
{
    optimize();
    /*
    string s("Hellow");
    cout<<s<<endl;

    string s2(5,'s');
    s.push_back('!');
    cout<<s<<endl;

    s.append("$$$$$");
    cout<<s<<endl;
    */


    /*
    string s = "hello";
    s.insert(1,"!!!");
    cout<<s<<endl;

    s.erase(1,3);
    cout<<s<<endl;


    s.replace(0,5,"Saiful");
    cout<<s<<endl;

    s.replace(s.begin(),s.begin()+6,"Hi");
    cout<<s<<endl;

    s.pop_back();
    cout<<s<<endl;

    s.clear();
    cout<<s<<endl;

    string s1 = "Animal";
    string::iterator it;
    for(it = s1.begin();it!=s1.end();it++)
    {
        cout<<*it<<endl;
    }

    sort(s1.begin(),s1.end(),greater<char>());
    cout<<s1<<endl;
    */


    //string s = "hello world";
    //cout<<s<<endl;
    /*
    int idx = s.find('l');
    cout<<idx<<endl;

    int idx2 = s.find_first_of('o');
    cout<<idx2<<endl;

    int idx3 = s.find_last_of('o');
    cout<<idx3<<endl;

    int idx4 = s.find_first_not_of('h');
    cout<<idx4<<endl;
*/
    //int idx5 = s.find_last_not_of('d');
    //cout<<idx5<<endl;

/*
    string s = "eeeedbcccdbbbbdccaaabbbbaaa";

    sort(s.begin(),s.end());
    auto last = unique(s.begin(),s.end());
    s.erase(last,s.end());
    cout<<s<<endl;
*/


/*
    string s = "bdacfehg";

    auto it_min = min_element(s.begin(),s.end());
    auto it_max = max_element(s.begin(),s.end());

    cout<<*it_min<<" "<<*it_max<<endl;

*/


/*
    string s = "abracadabra";
    int count_a = count(s.begin(),s.end(),'a');
    cout<<count_a<<endl;
*/

/*
    string s = "hello_world";
    cout<<s<<endl;
    cout<<s.substr(4,5)<<endl;
    cout<<s.substr(5);
*/

/*
    string s;
    getline(cin,s);

    stringstream ss(s);
    string word;
    while(ss>>word)
    {
        cout<<word<<endl;
    }
*/

/*
    string path = "/user/code/hello.cpp";
    int pos = path.find_last_of('/');
    cout<<path.substr(pos+1)<<endl;

    int cnt = 0;
    for(int i=0;i<path.size();i++)
    {
        if(path[i]=='/')
        {
            cnt = i;
        }
    }

    cout<<path.substr(cnt+1)<<endl;
*/



/*
    string s = "madama";
    string rev = s;
    reverse(rev.begin(),rev.end());
    if(s==rev)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
*/

/*
    string s = "aabfegsahhxbczz";

    vector<int> freq(26,0);

    for(char c: s)
    {
        freq[c-'a']++;
    }

    for(int i=0;i<26;i++)
    {
        cout<<char(i+'a')<<": "<<freq[i]<<endl;
    }
*/



/*
    string s = "HeLLo";

    for(char &c: s)
    {
        if(islower(c))
        {
            c=toupper(c);
        }
        else if(isupper(c))
        {
            c = tolower(c);
        }
    }

    cout<<s<<endl;
*/



/*
    string s = "education",result = "";
    for(char c: s)
    {
        if(string("aeiouAEIOU").find(c)==-1)
        {
            result+=c;
        }
    }

    cout<<result<<endl;
*/


/*
    string s = "this is a test";
    for(char &c: s)
    {
        if(c==' ')
        {
            c = '-';
        }
    }
    cout<<s<<endl;
*/

/*
    string s;
    getline(cin,s);
    stringstream ss(s);
    string word;
    string ans;

    while(ss>>word)
    {
        word[0] = toupper(word[0]);
        ans+=word;
        ans+=" ";
    }

    ans.pop_back();

    cout<<ans<<endl;

*/


    return 0;
}

