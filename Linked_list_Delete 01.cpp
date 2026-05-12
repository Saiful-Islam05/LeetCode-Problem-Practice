#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'


    void deleteLinkedList(int value)
    {
        node *myNode = head,previous = NULL;
        bool isFound = false;

        while(myNode!=NULL)
        {
            if(myNode->number==value)
            {
                if(previous==NULL)
                {
                    head = myNode->next;
                }
                else
                {
                    previous->next = myNode->next;
                }
                isFound = true;
            }
            previous = myNode;
           myNode =  myNode->next;

        }

        if(isFound==false)
        {
            cout<<"No found"<<endl;
        }
    }

int main()
{
    optimize();


    return 0;
}

