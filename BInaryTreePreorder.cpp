#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

    //Escalator create
    typedef struct node Node;

    //Structure of tree create and delcare
    struct node{
        int data;
        node *left;
        node *right;
    };

    // Create a node;
    node* createNode(int value)
    {
        node* Node = (node*)malloc(sizeof(node));

        Node->data = value;
        Node->left = NULL;
        Node->right = NULL;

        return(Node);
    }

    //Preorder Traverse
    void preorderTraverse(node* root)
    {
        if(root==NULL)
        {
            return;
        }

        cout<<root->data<<" ";

        preorderTraverse(root->left);
        preorderTraverse(root->right);
    }


int main()
{
    optimize();
    //value insert of main function;
    node* root = createNode(40);
    root->left = createNode(30);
    root->right = createNode(50);
    root->left->left = createNode(25);
    root->left->right = createNode(35);
    root->left->left->left = createNode(15);
    root->left->left->right = createNode(28);
    root->right->left = createNode(45);
    root->right->right = createNode(60);
    root->right->right->left = createNode(55);
    root->right->right->right = createNode(70);


    preorderTraverse(root);

    return 0;
}

