#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

    typedef struct tree
    {
        int value;
        struct tree *leftChild;
        struct tree *rightChild;
    }node;
    node *root = NULL;


    void insertNode(int data)
    {
        node *tempNode;
        node *currentNode;
        node *parentNode;

        tempNode = new node();
        tempNode->value = data;

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
                if(data<=parentNode->value)
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


    void inorderTraversal(node *currentNode)
    {
        if(currentNode!=NULL)
        {
            inorderTraversal(currentNode->leftChild);
            cout<<currentNode->value<<" ";
            inorderTraversal(currentNode->rightChild);
        }
    }

int main()
{
    optimize();
    insertNode(4);
    insertNode(2);
    insertNode(5);
    insertNode(1);
    insertNode(3);
    insertNode(6);

    cout<<"InOrder Traversal = ";
    inorderTraversal(root);

    return 0;
}

