#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

    struct linked_list
    {
        int number;
        struct linked_list *next;
    };
    typedef struct linked_list node;

    void create(node *myList)
    {
        cin>>myList->number;
        if(myList->number==1000)
        {
            myList->next=NULL;
        }
        else
        {
            myList->next = new node();
            create(myList->next);
        }


    }

    void print(node *myList)
    {
        cout<<myList->number<<" ";
        if(myList->next==NULL)
        {
            return;
        }
        print(myList->next);
    }

    int countLinkedList(node *myList)
    {
        if(myList->next == NULL)
        {
            return 0;
        }

        return 1+countLinkedList(myList->next);
    }

int main()
{
    optimize();
    node *head;
    head = new node(); // (node*)malloc(sizeof(node));

    create(head);
    cout<<endl;

    print(head);
    cout<<endl;


    cout<<"Total item = "<<countLinkedList(head)<<endl;

    return 0;
}

