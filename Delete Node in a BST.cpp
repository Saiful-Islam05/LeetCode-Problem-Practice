#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

    TreeNode* findMinimum(TreeNode *root)
    {
        if(root==NULL)
        {
            return root;
        }

        while(root->left!=NULL)
        {
            root = root->left;
        }

        return root;
    }


    TreeNode* deleteNode(TreeNode* root, int key)
    {
        if(root==NULL)
        {
            return root;
        }
        else if(key<root->val)
        {
            root->left = deleteNode(root->left,key);
        }
        else if(key>root->val)
        {
            root->right = deleteNode(root->right,key);
        }
        else
        {
            if(root->left==NULL && root->right==NULL)
            {
                root=NULL:
            }
           else if(root->right==NULL)
            {
                root = root->left;
            }
            else if(root->left==NULL)
            {
                root = root->right;
            }
            else
            {
                treeNode* tempNode = findMinimum(root->right)
                root->val = tempNode->val
                root->right = deleteNode(root->right,tempNode->val);

            }

        }
        return root;
    }


int main()
{
    optimize();


    return 0;
}

