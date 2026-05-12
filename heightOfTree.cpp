#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

    //Escalator create
    typedef struct node Node;

    //Structure of Tree
    struct node
    {
        int data;
        node *left;
        node *right;
    };

    // Create New Node
    node* createNode(int value)
    {
        node* Node = new node();  //c++ dynamic memory allocation

        Node->data = value;
        Node->left = NULL;
        Node->right = NULL;

        return (Node);
    }

    // Calcular height/depth of tree
    int calculateDepth(node* root)
    {
        if(root==NULL)
        {
            return 0;
        }
        else
        {
            int lDepth = calculateDepth(root->left);
            int rDepth = calculateDepth(root->right);

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
int main()
{
    optimize();
    node* root = createNode(1);
    root->left = createNode(9);
    root->right = createNode(20);
    root->right->left = createNode(15);
    root->right->right = createNode(7);

    cout<<calculateDepth(root)<<endl;

    return 0;
}

