#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

// Escalator create
    typedef struct node Node;

// Structure of tree
    struct node{
        int data;
        node *left;
        node *right;
    };

// CreateNode part
    node* createNode(int value)
    {
        node* Node = (node*)malloc(sizeof(node));

        Node->data = value;
        Node->left = NULL;
        Node->right = NULL;

        return(Node);

    }

// PostOrder Traversal;
    void postOrderTraverse(node* root)
    {
        if(root==NULL)
        {
            return;
        }

        postOrderTraverse(root->left);
        postOrderTraverse(root->right);

        cout<<root->data<<" ";
    }
int main()
{
    optimize();
    node* root = createNode(2);
    root->left = createNode(7);
    root->right = createNode(9);
    root->left->left = createNode(1);
    root->left->right = createNode(6);
    root->left->right->left = createNode(5);
    root->left->right->right = createNode(10);
    root->right->right = createNode(8);
    root->right->right->left = createNode(3);
    root->right->right->right = createNode(4);

    postOrderTraverse(root);
    return 0;
}

