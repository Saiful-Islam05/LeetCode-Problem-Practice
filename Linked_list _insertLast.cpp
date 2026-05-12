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
    node *head = NULL;
    node *last = NULL;


    void insert_at_last(int value)
    {
        node *temp_node;
        temp_node = new node();

        temp_node->number = value;
        temp_node->next = NULL;

        if(head==NULL)
        {
            head = temp_node;
            last = temp_node;
        }
        else
        {
            last->next = temp_node;
            last = temp_node;
        }
    }

int main()
{
    optimize();


    return 0;
}

