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
node *head = NULL,*tail = NULL;


    node* getNewNode(int value)
    {
        node *newNode = new Node();
        newNode->number = value;
        newNode->next = NULL;
        newNode->previous = NULL;
        return;
    }


void insert_at_middle(int value,int position)
{
    node *newNode = getNewNode(value);  //Declare and get space for new Node;

    if(head==NULL)  //Check linked list null or not;
    {
        head = newNode;
        tail = newNode;
        return;
    }

    node *temp = new node();  //Take space for temp;
    temp = head;  //Put head in the temp variable;
    int i = 1;  // Assign 1 into the i;

    while((i<position-1) && temp->next!=NULL)
    {
        temp = temp->next;
        i++;
    }

    newNode->next = temp->next;

    newNode->previous = temp;

    if(temp->next)
    {
        temp->next->previous = newNode;
    }
    temp->next = newNode;


}
int main()
{
    optimize();


    return 0;
}

