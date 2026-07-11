/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {

    bool bstValidate(TreeNode* root,TreeNode* lowerBound,TreeNode* upperBound)
    {
        if(root==nullptr)
        {
            return true;
        }

        if(lowerBound !=nullptr && root->val <= lowerBound->val)
        {
            return false;
        }
        if(upperBound !=nullptr && root->val >= upperBound->val)
        {
            return false;
        }

        bool left = bstValidate(root->left,lowerBound,root);

        bool right = bstValidate(root->right,root,upperBound);

        return (left && right);
    }

public:
    bool isValidBST(TreeNode* root) {
        
       return bstValidate(root,nullptr,nullptr);

    }
};