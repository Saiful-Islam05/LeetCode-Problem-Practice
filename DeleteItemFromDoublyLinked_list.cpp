#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

void deleteNode(int position)
{
    if(head==NULL)
    {
        return;
    }
    if(position==1)
    {
        head = head->next;

        if(head->next == NULL)
        {
            tail = NULL;
        }
        else
        {
            head->next->previous = NULL;
        }
        return;
    }
    if(i==position)
    {
        //Temp node will be deleted.
        tempAnother = temp->previous;
        tempAnother->next = temp->next;

        if(temp->next == NULL)
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

