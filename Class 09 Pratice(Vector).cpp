#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

    class Student
    {
    public:
        int roll;
        int number;

        Student(int r,int n)
        {
            roll = r;
            number = n;
        }

    };

    bool comp(Student &a, Student &b)
    {
        if(a.number == b.number)
        {
            return a.roll<b.roll;
        }
        else
        {

            return a.number<b.number;
        }
    }

int main()
{
    optimize();
    //vector<int> v = {1,4,5,1,2,3,5,6,4,1,2,5,3};

    //cout<<v.at(3)<<endl;
   // cout<<v.capacity()<<endl;

   // v.shrink_to_fit();



    /*
    auto it = find(v.begin(),v.end(),3);
    if(it!=v.end())
    {
        cout<<"Found at index: "<<(it-v.begin());
    }
    */
    /*
    sort(v.begin(),v.end());
    auto last = unique(v.begin(),v.end());

    v.erase(last,v.end());

    for(auto u: v)
    {
        cout<<u<<" ";
    }
    cout<<endl;
    */

    /*
    auto it = min_element(v.begin(),v.end());
    auto it2 = max_element(v.begin(),v.end());

    cout<<*it<<" "<<*it2<<endl;
*/


   // cout<<count(v.begin(),v.end(), 5);


   /*
   fill(v.begin(),v.end(),0);

   for(auto &u: v)
   {
       cout<<u<<" ";
   }
   cout<<endl;
   */


/*
   rotate(v.begin(),v.begin()+2,v.end()); //left rotation
   for(auto &u: v)
   {
       cout<<u<<" ";
   }
   cout<<endl;

*/

/*
    int sum = accumulate(v.begin(),v.end(),10);
    cout<<sum<<endl;
*/

/*
    sort(v.begin(),v.end());
    v.erase(unique(v.begin(),v.end()),v.end());
*/


/*
    vector<int> freq(7,0);

    for(auto &x: v)
    {
        freq[x]++;
    }

    sort(v.begin(),v.end());

    v.erase(unique(v.begin(),v.end()),v.end());

    for(auto &u: v)
    {
        cout<<u<<" "<<freq[u]<<endl;
    }
    */




    vector<Student> v = {Student(1,99),Student(5,80),Student(3,80)};

    sort(v.begin(),v.end(),comp);

    for(auto &u: v)
    {
        cout<<u.roll<<" "<<u.number<<endl;
    }



    return 0;
}

