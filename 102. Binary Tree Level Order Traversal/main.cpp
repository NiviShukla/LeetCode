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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;

        if(root == NULL)
        return ans;
        /*
        use of queue for storing each level of the tree for BFS

        */
        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty())
        {
            //keeping track of size of each level we are processing
            int size = q.size();
            vector<int> level;
            for(int i = 0;i<size;++i)
            {
                TreeNode* temp = q.front();
                q.pop();
                /*
                pushing child node of the level into queue
                so we dont lose track of the nodes
                if we have left and right
                */
                if(temp->left)
                q.push(temp->left);

                if(temp->right)
                q.push(temp->right);

                level.push_back(temp->val);
            }
            ans.push_back(level);
        }
        return ans;
    }
};
