#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

    // Escalator create
    typedef struct node Node;

    // Structure of tree create and delcaration
    struct node
    {
        int data;
        node* left;
        node* right;
    };

    // create a new node
    node* createNode(int value)
    {
        node* Node=(node*)malloc(sizeof(node));

        Node->data = value;
        Node->left = NULL;
        Node->right = NULL;

        return(Node);
    }

    // Inorder Traversal;
    void inOrderTraverse(node* root)
    {
        if(root==NULL){
            return;
        }

        inOrderTraverse(root->left);
        cout<<root->data<<" ";
        inOrderTraverse(root->right);
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

    inOrderTraverse(root);


    return 0;
}

