#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'


void searchOnTree(int value)
{
    node *currentNode = root;
    bool isFound = false;

    while(1)
    {
        if(value==currentNode->number)
        {
            isFound = true;
            break;
        }
        else if(value<=currentNode->number)
        {
            currentNode = currentNode->leftChild;
        }
        else
        {
            currentNode = currentNode->rightChild;
        }

        if(currentNode==NULL)
        {
            break;
        }
    }

    if(isFound==true)
    {
        cout<<"Item found = "<<currentNode->number<<endl;
    }
    else
    {
        cout<<"Item is not found"<<endl;
    }
}
int main()
{
    optimize();


    return 0;
}

