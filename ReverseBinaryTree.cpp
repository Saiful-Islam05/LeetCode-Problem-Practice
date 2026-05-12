#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

    //create Escalator of tree
    typedef struct node Node;
    typedef struct temp;

    // Create Structure of a tree
    struct node
    {
        int data;
        node *left;
        node *right;
    };

    // CreateNode of tree
    node* createNode(int value)
    {
       node* Node = new node();  //c++ dynamic memory allocation;

       Node->data = value;
       Node->left = NULL;
       Node->right = NULL;

       return(Node);
    }

    // InOrder Traversal
    void inOrderTraverse(node* root)
    {
        if(root==NULL)
        {
            return;
        }

        inOrderTraverse(root->left);
        cout<<root->data<<" ";
        inOrderTraverse(root->right);
    }

    // Mirror create for reverse
    void mirror(node* root)
    {
        if(root==NULL)
        {
            return;
        }
        else
        {
            node* temp;

            mirror(root->left);
            mirror(root->right);

            temp = root->left;
            root->left = root->right;
            root->right = temp;
        }
    }
int main()
{
    optimize();
    node* root = createNode(4);
    root->left = createNode(2);
    root->right = createNode(7);
    root->left->left = createNode(1);
    root->left->right = createNode(3);
    root->right->left = createNode(6);
    root->right->right = createNode(9);

    inOrderTraverse(root);

    cout<<endl;
    mirror(root);
    inOrderTraverse(root);

    return 0;
}

