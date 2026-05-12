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


    node *newNodeSpace(int value)
    {
        node *newNode = new node();
        newNode->number = value;
        newNode->next = NULL;
        newNode->previous = NULL;
        return;
    }

    void insert_at_middle(int value, int position)
    {
        node *newNode = newNodeSpace(value);

        if(head==NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }

        node *temp = new node();
        temp = head;
        int i=1;

        while((i<position-1) && (head->next!=NULL))
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

