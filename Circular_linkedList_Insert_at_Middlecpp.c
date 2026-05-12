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
node *head= NULL, *tail = NULL;

    void insert_at_middle(int value, int position)
    {
        if(position==1)
        {
            insert_at_head(value);
            return;
        }
        else if(position>1 && head!=NULL)
        {
            node *current = head;
            node *temp = new node();
            int cnt = 0;

            do{
                cnt++;
                temp = current;
                current = current->next;
                while(cnt<position-1 && current->next!=head)
            }

            if(cnt==position-1)
            {
                if(temp==tail)
                {
                    insert_at_tail(value);
                }
                else
                {
                    node *newNode = new node()
                    newNode->number = value;

                    temp->next = newNode;
                    newNode->next = current;
                }
                return;
            }
        }
        cout<<"Not Exist"<<endl;
    }
int main()
{
    optimize();


    return 0;
}

