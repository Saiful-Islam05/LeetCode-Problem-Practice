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
        node *currentNode = NULL;
        node *parentNode = NULL;
        node *tempNode;

        tempNode = new node();//dynamic memory allocation
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
                        parentNode->leftChild=tempNode;
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

    void inOrderTraverse(node *rootNode)
    {
        if(rootNode==NULL)
        {
            return;
        }
        inOrderTraverse(rootNode->leftChild);
        cout<<rootNode->number<<" ";
        inOrderTraverse(rootNode->rightChild);
    }

    void postOrderTraverse(node *rootNode)
    {
        if(rootNode==NULL)
        {
            return;
        }
        postOrderTraverse(rootNode->leftChild);
        postOrderTraverse(rootNode->rightChild);
        cout<<rootNode->number<<" ";
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


    cout<<"PreOrder Traversal = ";
    preOrderTraversal(root);
    cout<<endl;

    cout<<"InOrder Traversal = ";
    inOrderTraverse(root);
    cout<<endl;

    cout<<"PostOrder Traverse = ";
    postOrderTraverse(root);
    cout<<endl;

    return 0;
}

