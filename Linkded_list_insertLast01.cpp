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
    node *head = NULL,*last = NULL;

    void insert_at_last(int value)
    {
        node *newNode;
        newNode = new node();

        newNode->number = value;
        newNode->next = NULL;

        if(head==NULL)
        {
            head = newNode;
            last = newNode;
        }
        else
        {
            last->next = newNode;
            last = newNode;
        }
    }
int main()
{
    optimize();


    return 0;
}

