#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

    //Create Escalator of Structure
    typedef struct node Node;

    //Create Structure of Tree
    struct node{
    int data;
    node *left;
    node *right;
    };

    //CreateNode
    node* createNode(int value)
    {
       node Node = new node(); //c++ dynamic memory allocation;

       Node->data = value;
       Node->left = NULL;
       Node->right = NULL;

       return(Node);
    }

    //InorderTraversal;
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

    //To find the InOrder successor;
    node* findMinimum(node* cur)
    {
        while(cur->left!=NULL)
        {
            cur = cur-left;
        }

        return cur;
    }

    //Insert a Node;
    node* insertion(node* root,int item)
    {
        if(root==NULL)
        {
            return createNode(item);
        }
        if(item<root->data)
        {
            root->left = insertion(root->left,item);
        }
        else
        {
            root->right = insertion(root->right,item);
        }

        return root;
    }


int main()
{
    optimize();


    return 0;
}

