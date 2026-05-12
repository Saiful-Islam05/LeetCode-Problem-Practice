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


node *findMaxRecursive(node *root)
{
    if(root->rightChild==NULL)
    {
        return root;
    }
}

int main()
{
    optimize();


    return 0;
}

