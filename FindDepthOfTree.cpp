#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

    //Escalator create
    typedef struct node Node;

    //structure of Tree create
    struct node{
        int data;
        node *left;
        node *right;
    };

    //Compute the maxDepth of Tree
    int maxDepth(node* node)
    {
        if(node==NULL)
        {
            return 0;
        }
        else
        {
            int lDepth = maxDepth(node->left);
            int rDepth = maxDepth(node->right);

            if(lDepth>rDepth)
            {
                return (lDepth+1);
            }
            else{
                return (rDepth+1);
            }
        }
    }

    //create Node
    node* createNode(int value)
    {
        node* Node = new node();
      //  node* Node = (node*)malloc(sizeof(node));
        Node->data = value;
        Node->left = NULL;
        Node->right = NULL;

        return(Node);
    }


int main()
{
    optimize();
    node* root = createNode(1);
    root->left = createNode(9);
    root->right = createNode(20);
    root->right->left = createNode(15);
    root->right->right = createNode(7);

    cout<<maxDepth(root)<<endl;

    return 0;
}

