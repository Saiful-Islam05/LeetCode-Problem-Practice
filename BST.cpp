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
        node *currentNode=NULL;
        node *parentNode=NULL;

        tempNode = new node();  //C++ dynamic memory allocation Or = //tempNode = (node*)malloc(sizeof(node));
        tempNode->number = value;

        //For the very first call
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
                        parentNode->rightChild=tempNode;
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
            cout<<currentNode->number<<" ";
            inorderTraversal(currentNode->rightChild);
        }
    }
int main()
{
    optimize();
    //Inserting nodes into the BST
    insertNode(50);
    insertNode(30);
    insertNode(20);
    insertNode(40);
    insertNode(70);
    insertNode(60);
    insertNode(80);

    cout<<"Inorder Traversal = ";
    inorderTraversal(root);
    cout<<endl;

    return 0;
}
