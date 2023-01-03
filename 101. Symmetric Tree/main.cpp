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
public:
    bool ischeck(TreeNode* left, TreeNode* right)
    {
        /*
        recursively calling the left and right of the root's left and right
        to get to the end node
        on mirror
        checking left->left to left->right
        and similarly right->left to right->right
        */
        if(left == NULL || right == NULL)
        {
            if(left == right)
            return true;

            else
            return false;
        }

        if(left->val != right->val)
        return false;

        return ischeck(left->left,right->right) && ischeck(left->right,right->left);
    }
    bool isSymmetric(TreeNode* root) {
        //we check if root is null or not and ischeck func returns true or false
        return root == NULL || ischeck(root->left,root->right);

    }
};
