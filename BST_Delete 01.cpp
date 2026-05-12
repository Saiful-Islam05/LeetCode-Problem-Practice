#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

    typedef struct tree{
        int number;
        struct tree *leftChild=NULL;
        struct tree *rightChild = NULL;
    }node;

    node *root = NULL;

    void insertNode(int value)
    {
        node *currentNode=NULL;
        node *parentNode=NULL;
        node *tempNode;

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

        while(root->leftChld!=NULL)
        {
            root = root->leftChild;
        }
        return root;
    }

        node *deleteNode(node *currentNode, int value)
        {
            //Empty Tree
            if(currentNode==NULL)
            {
                return NULL;
            }
            //Value is less then node number so go to left subtree.
            else if(value<currentNode->number)
            {
                currentNode->leftChild = deleteNode(currentNode->leftChild,value);
            }
            //Value is greater than node number, so go to right subtree.
            else if(value>currentNode->number)
            {
                currentNode->rightChild = deleteNode(currentNode->rightChild,value);
            }
            // value is equal that mean value find to delte.
            else
            {
                //node has no child
                if(currentNode->leftChild ==NULL && currentNode->rightChild==NULL)
                {
                    currentNode=NULL;
                }
                //Node has one rightChild only.
                else if(currentNode->leftChild==NULL)
                {
                    currentNode = currentNode->rightChild;
                }
                //Node has one leftChild only.
                else if(currentNode->rightChild==NULL)
                {
                    currentNode = currentNode->leftChild;
                }
                //Node has two both child
                else
                {
                    node *tempNode = findMinimum(currentNode->rightChild);
                    currentNode->number = tempNode->number;
                    currentNode->rightChild = deleteNode(currentNode->rightchild,tempNode->number);
                }
            }
        }

int main()
{
    optimize();

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

    cout<<"PreOrder Traversal = "<<endl;
    preOrderTraversal(root);
    cout<<endl;
    return 0;
}

