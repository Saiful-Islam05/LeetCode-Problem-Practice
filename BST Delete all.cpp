#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
    typedef struct tree
    {
        int number;
        struct tree *leftChild;
        struct tree *rightChild;
    }node;
    node *root = NULL;


    node *deleteNode(node *currentNode, int value)
    {
        //Empty tree
        if(currentNode==NULL)
        {
            return NULL;
        }
        //Value is less than node's number. SO go to left;
        else if(value<currentNode->number)
        {
            currentNode->leftChild = deleteNode(currentNode->leftChild,value);
        }
        //Value is greater than node's number. So go to right;
        else if(value>currentNode->number)
        {
            currentNode->rightChild = deleteNode(currentNode->rightChild,value);
        }
        //Node found. Lets delete it;
        else
        {
            //Node has no Child;
            if(currentNode->leftChild == NULL && currentNode->rightChild==NULL)
            {
                currentNode = NULL;
            }
            //Node has only right child;
            else if(currentNode->leftChild == NULL)
            {
                currentNode = currentNode->rightChild;
            }
            //Node has only left Child;
            else if(currentNode->rightChlid == NULL)
            {
                currentNode = currentNode->leftChild;
            }
            //Node has two Children;
            else
            {
                node *tempNode = findMinimum(currentNode->rightChild);
                currentNode->number = tempNode->number;
                currentNode->rightChild = deleteNode(currentNode->rightChld,tempNode->number);
            }
        }
        return currentNode;
    }
int main()
{
    optimize();


    return 0;
}

