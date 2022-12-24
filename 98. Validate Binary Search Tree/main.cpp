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
    bool check(TreeNode* root,long minval,long maxval)
    {
        /*
        we set a limit inbetween which the root->val exist
        for root we take MAX and MIN value that is true
        then we go to left side of BST checking between minval value and root->val
        and to the right checking between root->val and max value
        */
        if(root == NULL)
        return true;

        if(root->val >= maxval || root->val <= minval)
        return false;

        return (check(root->left,minval,root->val) && check(root->right,root->val,maxval));
    }

    bool isValidBST(TreeNode* root) {
        //checking to left and right of BST
        return check(root,LONG_MIN,LONG_MAX);
    }
};
