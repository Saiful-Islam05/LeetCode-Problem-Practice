#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

    void searchOnTree(int value)
    {
        node *currentNode = root;
        int flag = 0;

        while(1)
        {
            if(value==currentNode->number)
            {
                flag = 1;
                break;
            }
            else if(value<=currentNode->number)
            {
                currentNode = currentNode->leftChild;
            }
            else
            {
                currentnode = currentNode->rightChild;
            }

            if(flag)
            {
                cout<<"The Item is founded"<<endl;
            }
            else
            {
                cout<<"The item is not founded"<<endl;
            }
        }
    }
int main()
{
    optimize();


    return 0;
}

