#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

    //Create Escalator
    typedef struct node Node;

    //Structure of Tree and declearation
    struct node
    {
        int data;
        node *left;
        node *right;
    };


    // CalculateDepth or height of tree;
    int calculateDepth(node* node)
    {
        if(node==NULL)
        {
            return 0;
        }
        else
        {
            int lDepth = calculateDepth(node->left);
            int rDepth = calculateDepth(node->right);

            if(lDepth>rDepth)
            {
                return (lDepth+1);
            }
            else
            {
                return (rDepth+1);
            }
        }
    }

     // Create new Node;
    node* createNode(int value)
    {
        node* Node = new node();  //c++ dynamic memory allocation.

        Node->data = value;
        Node->left = NULL;
        Node->right = NULL;

        return (Node);
    }

int main()
{
    optimize();
    node* root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);

    cout<<calculateDepth(root)<<endl;

    return 0;
}

