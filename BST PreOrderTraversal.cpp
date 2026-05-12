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

    void preOrderTraversal(int *rootNode)
    {
        if(rootNode==NULL)
        {
            return;
        }
        cout<<rootNode->number<<" ";

        preOrderTraversal(rootNode->leftChild);
        preOrderTraversal(rootNode->rightChild);
    }

    void inOrderTraversal(int *rootNode)
    {
        if(rootNode==NULL)
        {
            return;
        }
        inOrderTraversal(rootNode->leftChild);
        cout<<rootNode->number<<" ";
        inOrderTraversal(rootNode->rightChild);
    }

    void postOrderTraversal(int *rootNode)
    {
        if(rootNode==NULL)
        {
            return;
        }
        postOrderTraversal(rootNode->leftChild);
        postOrderTraversal(rootNode->rightChild);
        cout<<rootNode->number<<" ";
    }




int main()
{
    optimize();


    return 0;
}

