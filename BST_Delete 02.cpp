#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

    typedef struct tree{
        int number;
        struct tree *leftChild=NULL;
        struct tree *rightChild=NULL:
    }node;

    node *root = NULL;

    void insertNode(int value)
    {
        node *currentNode = NULL;
        node *parentNode = NULL;
        node *tempNode;

        tempNode = new node(); //dynamic memory allocation;
        tempNode->number = value;

        if(root==NULL)
        {
            root = tempNode;
        }
        else
        {
            currentNode = root;
            parentNode = NULL;

            while(true)
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


    void preOrderTraversal(node *rootNode)
    {

            if(rootNode==NULL)
            {
                return;
            }

            cout<<rootNode->number<<" ";
            preOrderTraversal(rootNode->leftChild);
            preOrderTraversal(rootNode->rightChild);
    }

    node *findMinimum(node *root)
    {
        if(root==NULL)
        {
            return root;
        }
        while(root->leftChild!=NULL)
        {
            root = root->leftChild;
        }
        return root;
    }


    node *deleteNode(node *currentNode, int value)
    {
        if(currentNode==NULL)  //Empty Tree
        {
            return NULL;
        }
        else if(value<currentNode->number) //Value is less than nodes number, so go to left subtree.
        {
            currentNode->leftChild = deleteNode(currentNode->leftChild,value);
        }
        else if(value>currentNode->number) //Value is greater than nodes number, so go to right subtree.
        {
            currentNode->rightChild = deleteNode(currentNode->rightChild,value);
        }
        else //Node found let's delete it!
        {
            //node has no child
            if(currentNode->leftChild==NULL && currentNode->rightChild == NULL)
            {
                currentNode = NULL;
            }
            //Node has only rightChild;
            else if(currentNode->leftChild==NULL)
            {
                currentNode = currentNode->rightChild;
            }
            //Node has only leftChild;
            else if(currentNode->rightChild==NULL)
            {
                currentNode = currentNode->leftChild;
            }
            //Node has two child
            else
            {
                node *tempNode = findMinimum(currentNode->rightChild);
                currentNode->number = tempNode->number;
               currentNode->rightChild = deleteNode(currentNode->rightChild,tempNode->number)
            }
        }

        return currentNode;
    }



int main()
{
    optimize();


    return 0;
}


