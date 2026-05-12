#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
    // Escalator create
    typedef struct node Node;

    //Structure of node create
    struct node
    {
        int data;
        node *left;
        node *right;
    };

    // Create new node
    node* crateNode(int value)
    {
        node* Node = new node(); //c++ dynamic memory allocation

        Node->data = value;
        Node->left = NULL;
        Node->right = NULL;

        return(Node);
    }

    //Inorder traversal
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
int main()
{
    optimize();


    return 0;
}

