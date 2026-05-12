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


    int isItBst(node *root)
    {
        if(root==NULL)
        {
            return 1;
        }
        if(root->leftChild!=NULL && findMax(root->leftChild)> root->number)
        {
            return 0;
        }
        if(root->rightChild!=NULL && findMin(root->rightChild)< root->number)
        {
            return 0;
        }
        if(!isItBst(root->leftChild)|| !isItBST(root->rightChild))
        {
            return 0;
        }

        return 1;
    }
int main()
{
    optimize();


    return 0;
}

