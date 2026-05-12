#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

//Define structure of doubly linked list
struct linked_list
{
    int number;
    struct linked_list *next;
    struct linked_list *previous;
};
typedef struct linked_list node;
node *head = NULL;
node *tail = NULL;

    node* getMemory(int value)
    {
        node* newNode = new node();
        newNode->number = value;
        newNode->next = NULL;
        newNode->previous = NULL;
        return;
    }

    void insertLinkedlistAtTail(int value)
    {
        node *newNode = getMemory(value);
        if(head==NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }

        tail->next = newNode;
        newNode->previous = tail;
        tail = newNode;
    }

int main()
{
    optimize();


    return 0;
}

