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


void insert_at_head(int value)
{
    node *newNode = new node();
    newNode->number = value;
    newNode->next = newNode;

    if(head==NULL)
    {
        head = newNode;
        tail = newNode;
    }

    else
    {
        newNode->next = head;
        tail->next = newNode;
        head = newNode;
    }
}


int main()
{
    optimize();


    return 0;
}

