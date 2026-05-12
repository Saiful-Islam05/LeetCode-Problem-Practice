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
        if(myList->number>999)
        {
            myList->next = NULL;
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
        if(myList->next == NULL)
        {
            return;
        }
        print(myList->next);
    }

    void delete_item(int value)
    {
        node *myNode = head,*previous = NULL;
        bool flag = 0;

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
                cout<<value<<" Is deleted from list"<<endl;
                flag = 1;
                break;
            }
            previous = myNode;
            myNode = myNode->next;

        }

        if(flag==0)
        {
            cout<<"Key not found!"<<endl;
        }

    }


int main()
{
    optimize();
    node *head;
    head = new node();

    create(head);


    return 0;
}

