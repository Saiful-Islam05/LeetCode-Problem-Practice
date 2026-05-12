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
    node *head = NULL, *last = NULL;

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
        cout<<myList->number;
        if(myList->next==NULL)
        {
            return;
        }
        print(myList->next);
    }

    int countListItem(node *myList)
    {
        if(myList->next == NULL)
        {
            return 0;
        }
        return (1+countListItem(myList->next));
    }

    void insert_after(int key, int value)
    {

    }
    node *myNode = head;
    bool flag = 0;

    while(myNode!=NULL)
    {
        if(myNode->number==key)
        {
             node *newNode = new node();
             newNode->number = value;
            newNode->next = myNode->next;
            myNode->next = newNode;

            cout<<value<<" is inserted after "<<key<<endl;
            flag = 1;
            break;
        }
        else
        {
            myNode = myNode->next;
        }

    }

    if(flag==0)
    {
        cout<<"Key not Found"<<endl;
    }



int main()
{
    optimize();


    return 0;
}

