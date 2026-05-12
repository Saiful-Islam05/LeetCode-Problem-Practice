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

    void insertNode(int value)
    {
        node *tempNode;
        node *currentNode = NULL;
        node *parentNode = NULL;

        tempNode = new node();
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
                    if()
                }
            }
        }
    }

int main()
{
    optimize();


    return 0;
}

