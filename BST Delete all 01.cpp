#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
typedef struct tree
{
    int number;
    struct tree *leftChild = NULL;
    struct tree *rightChild = NULL;
} node;
node *root = NULL;


    node *deleteNode(node *currentNode, int value)
    {
        //empty tree
        if(currentNode==NULL)
        {
            return NULL;
        }
        //less than
        else if(value<currentNode->number)
        {
            currentNode->leftChild = deleteNode(currentNode->leftChild,value);
        }
        //greater than
        else if(value>currentNode->number)
        {
            currentNode->rightChild = deleteNode(currentNode->rightChild,value);
        }
        //Equal find
        else
        {
            //No chlid
            if(currentNode->leftChild == NULL && currentNode->rightChild = NULL)
            {
                currentNode = NULL;
            }
            //only left child have
            else if(currentNode->rightChild==NULL)
            {
                currentNode = currentNode->leftChild;
            }
            //only right child have
            else if(currentNode->leftChild==NULL)
            {
                currentNode = currentNode->rightChild;
            }
            //It has two child
            else
            {
                node *tempNode = findMinimum(currentNode->rightChild);
                currentNode->number = tempNode->number;
                currentNode->rightChild = deleteNode(currentNode->rightChild,tempNode->number);
            }

        }
        return currentNode;

    }
int main()
{
    optimize();


    return 0;
}

