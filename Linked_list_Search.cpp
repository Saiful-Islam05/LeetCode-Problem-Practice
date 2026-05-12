#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

    void search_item(int value)
    {
        node *searchNode = head;
        int flag = 0;
        bool isFind = 0;

        while(searchNode!=0)
        {
            if(searchNode->number==value)
            {
                isFind = 1;
                break;
            }
            else
            {
                searchNode = searchNode->next;
            }
        }
        if(isFind == 0)
        {
            cout<<" Not Found"<<endl;
        }
    }

int main()
{
    optimize();


    return 0;
}

