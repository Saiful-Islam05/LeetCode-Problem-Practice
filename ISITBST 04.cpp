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

    int isBstOrderTraversal(node *root, int previous)
    {
        if(root==NULL)
        {
            return 1; //Base case
        }

        if(!isBstInOrderTraversal(root->leftChild,previous))
        {
            return 0;
        }

        if(root->number<previous)
        {
            return 0;
        }

        previous = root->number;

        return isBstOrderTraversal(root->rightChild,previous);
    }
int main()
{
    optimize();


    return 0;
}

