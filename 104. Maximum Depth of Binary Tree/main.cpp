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
    int maxDepth(TreeNode* root) {
        /*
        recursively calling root
        EX: [3,9,20,null,null,15,7]
        at root 3
        goes left and right
        from that check for 9
        as left and right are null it returns 1+max(0,0) = 1
        then on right 20 calls left=15 and right=7
        15 returns 1 and 7 also returns 1 so 20 returns 2
        1 from either of 15 or 7 and 1 from it self
        now for 3 ans = 1+max(1,2) = 1+2 = 3
        */
        if(root == NULL)
        return 0;

        int ans = 1 + max(maxDepth(root->left),maxDepth(root->right));

        return ans;
    }
};
