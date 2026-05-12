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
node *tail = NULL;


    void insert_at_middle(int value, int position)
    {
        if(position==1)
        {
            insert_at_head(number);   // if position is first value then call insert_at_head() function to insert value at head.
            return;
        }
        else if(position>1 && head!=NULL)
        {
            node *current = head;
            node *temp = new node();
            int cnt = 0;

            do
            {
                cnt++;
                temp = current;
                current = current->next;
                while(current->next != head && cnt<position-1);
            }

            if(cnt==position-1)
            {
                if(temp==tail)
                {
                    insert_at_tail(number);
                }
                else
                {
                    node *newNode = new node();
                    newNode->number = value;

                    temp->next = newNode;
                    newNode->next = current->next;
                }
                return;
            }
        }

        cout<<"Position does not exist"<<endl;
    }

int main()
{
    optimize();



    return 0;
}

