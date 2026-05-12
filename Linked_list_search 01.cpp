#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

    void searchItem(int value)
    {
        node *myNode = head;
        bool flag = 0;

        while(myNode!=NULL)
        {
            if(myNode->number==value)
            {
                flag = 1;
                break;
            }
            else
            {
                myNode = myNode->next;
            }
        }
        if(flag == 0)
        {
            cout<<"Not Found "<<endl;
        }
    }


int main()
{
    optimize();


    return 0;
}

