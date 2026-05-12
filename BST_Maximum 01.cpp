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

    int findMaxNumber(node *root)
    {
        if(root->rightChild==NULL)
        {
            return root->number;
        }

        return(findMaxNumber(root->rightChild));
    }

    int findMinNumber(node *root)
    {
        if(root->leftChild==NULL)
        {
            return root->number;
        }

        findMinNumber(root->leftChild);
    }
int main()
{
    optimize();


    return 0;
}

