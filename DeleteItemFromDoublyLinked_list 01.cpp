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
node *head = NULL;
node *tail = NULL


             void deleteNode(int position)
{
    if(head==NULL)
    {
        return;
    }
    if(position==1)
    {
        head = head->next;
        if(head->next==NULL)
        {
            tail = NULL
        }
        else
        {
            head->next->previous = NULL:
        }
        return;
    }
    if(i==position)
    {
        tempAnother = temp->previous;
        temAnother = temp->next;

        if(temp->next==NULL)
        {
            tail = tempAnother;
        }
        else
        {
            temp->next->previous = tempAnother;
        }
        free(temp);
    }

}
int main()
{
    optimize();


    return 0;
}

