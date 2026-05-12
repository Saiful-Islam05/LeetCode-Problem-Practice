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



    void searchOnTree(int value)
    {
        node *currentNode = root;
        int flag = 0;

        while(true)
        {
            if(value==currentNode->number)
            {
                flag = 1;
                break;
            }
            else if(value<=currentNode->number)
            {
                currentNode = currentNode->leftChild;
            }
            else
            {
                currentNode = currentNode->rightChild;
            }

            if(currentNode==NULL)
            {
                break;
            }
        }

        if(flag==1)
        {
            cout<<currentNode->number<<" is found on Tree"<<endl;
        }
        else
        {
            cout<<value<<" is not found on Tree"<<endl;
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
    int n;
    insertNode(50);
    insertNode(30);
    insertNode(20);
    insertNode(40);
    insertNode(70);
    insertNode(60);
    insertNode(80);

    cout<<"InOrder Traversal = ";
    inorderTraversal(root);
    cout<<endl;
    cout<<"Enter a number that you want to search = "<<endl;
    cin>>n;
    searchOnTree(n);

    return 0;
}

