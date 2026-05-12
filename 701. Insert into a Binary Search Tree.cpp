#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'


    void insertIntoBst(TreeNode *root, int val)
    {
        TreeNode *tempNode = new TreeNode();
        TreeNode *currentNode = NULL;
        TreeNode *parentNode = NULL;

        tempNode->val = val;

        if(root==NULL)
        {
            root = tempNode;
            return root;
        }
        else
        {
            currentNode = root;
            parentNode = NULL;

            while(1)
            {
                parentNode = currentNode;
                if(val<=parentNode->val)
                {
                    currentNode = currentNode->left;
                    if(currentNode==NULL)
                    {
                        parentNode->left = tempNode;
                        return root;
                    }
                }
                else
                {
                    currentNode = currentNode->right;
                    if(currentNode==NULL)
                    {
                        parentNode->right = tempNode;
                        return root;
                    }
                }
            }
        }

    }
int main()
{
    optimize();


    return 0;
}

