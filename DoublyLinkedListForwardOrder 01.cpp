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

    typedef struct linked_list node;
    node *head = NULL, *tail = NULL;

    void LinkedForwardOrderTraverse()
    {
        node *myList;
        myList = head;

        while(1)
        {
            if(head==NULL || tail==NULL)
            {
                break;
            }
            cout<<myList->number<<" ";

            if(myList==tail)
            {
                break;
            }

            myList = myList->next;
        }
    }

int main()
{
    optimize();


    return 0;
}

