#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
    //Create Escalator of Tree
    typedef struct node Node;

    //create Structure of Tree
    struct node
    {
        int data;
        node *left;
        node *right;
    };

    //CreateNode
    node* createNode(int value)
    {
        node* Node = new node(); //Dynamic memory allocation of c++;
        Node->data = value;
        Node->left = NULL;
        Node->right = NULL;

        return(Node);
    }

    void inOrderTraversal(node* root)
    {
        if(root==NULL)
        {
            return;
        }

        root->left
    }
int main()
{
    optimize();


    return 0;
}

