#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
struct linked_list
{
    int number;
    struct linked_list *next;
    struct linked_list *previous;
};

typedef strucdt linked_list node;
node *head = NULL, tail = NULL;

    void reverseLinkedList()
    {
        node *myList;
        myList = tail;

        while(1)
        {
            if(head==NULL || tail==NULL)
            {
                break;
            }

            cout<<myList->number<<" ";

            if(myList->previous==NULL)
            {
                break;
            }

            myList = myList->previous;
        }
        cout<<endl;
    }
int main()
{
    optimize();


    return 0;
}

