#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

    typedef struct tree{
        int number;
        struct tree *leftChild;   //declaration.
        struct tree *rightChild;
    }node;

    node *root = NULL;   //Initially root NULL.

    void insertNode(int value)
    {
        node *currentNode;       //Declaration.
        node *parentNode;
        node *tempNode;

        tempNode = new node(); //C++ dynamic memory allocation.
        tempNode->number = value;  // Initially new value assign in tempNode;

        if(root==NULL)
        {
            root = tempNode;   // Initially root null so.
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


    node *findMaxRecursive(node *root)
    {
        if(root->rightChild==NULL)
        {
            return root;
        }

        findMaxRecursive(root->rightChild);
    }

    node *findMinRecursive(node *root)
    {
        if(root->leftChild==NULL)
        {
            return root;
        }

        findMinRecursive(root->leftChild);
    }



int main()
{
    optimize();
    node *minNode, *maxNode;

    insertNode(45);
    insertNode(40);
    insertNode(54);
    insertNode(38);
    insertNode(41);
    insertNode(30);
    insertNode(39);
    insertNode(45);
    insertNode(44);
    insertNode(49);
    insertNode(70);

    maxNode = findMaxRecursive(root);
    if(maxNode!=NULL)
    {
        cout<<"Maximum value is = "<<maxNode->number<<endl;
    }
    else{
        cout<<"Maximum value not found"<<endl;
    }

     minNode = findMinRecursive(root);
    if(minNode!=NULL)
    {
        cout<<"Minimum value is = "<<minNode->number<<endl;
    }
    else{
        cout<<"Minimum value not found"<<endl;
    }


    return 0;
}

