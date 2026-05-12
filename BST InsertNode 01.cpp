#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
typedef struct tree
{
    int number;
    struct tree *leftChild;
    struct tree *rightChild;
} node;

node *root = NULL;


void insertNodee(int value)
{
    node *tempNode = new node();
    node *currentNode = NULL;
    node *parentNode = NULL;

    tempNode->number = value;

    if(root==NULL)
    {
        root = tempNode;
    }
    else
    {
        currentNode = root;
        parentNode = NULL;
        while(1)
        {
            parentNode = currentNode;

            if(value<=parentNode->number)
            {

                currentNode = currentNode->leftChild;
                if(currentNode==NULL)
                {
                    parentNode->leftChild = tempNode;
                    return;
                }
            }
            else
            {
                currentNode = currentNode->rightChild;
                if(currentNode==NULL)
                {
                    parentNode->rightChild = tempNode;
                    return;
                }
            }
        }


    }
}

int main()
{
    optimize();


    return 0;
}

