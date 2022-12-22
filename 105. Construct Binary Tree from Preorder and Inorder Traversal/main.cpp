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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        //create a hash map for inorder with index
        map<int,int>mp;

        for(int i =0;i<inorder.size();i++)
        {
            mp[inorder[i]]=i;
        }
        //creating a root to construct the tree

        TreeNode * root = constree(preorder,0,preorder.size()-1
                                   ,inorder,0,inorder.size()-1,mp);

        return root;
    }

    TreeNode* constree(vector<int>& preorder,int prestart,int preend,
                       vector<int>& inorder,int instart,int inend,map<int,int> &mp)
    {
        /*
        when we are at the last element then
        prestart > preend OR instart > inend
        then we return NULL
        */
     if(prestart > preend || instart > inend)
     return NULL;

     TreeNode* root = new TreeNode(preorder[prestart]);
     /*
     taking the root value on preorder in inorder so called inroot
     leftpart shows the number of element in left part of the node value
     */

     int inroot = mp[root->val];
     int leftpart = inroot - instart;
     /*
     prestart will be the next element
     preend will be element after prestart + number of element in left part of inorder
     instart will be the first element
     inend will be element just before the inroot
     */

     root->left = constree(preorder,prestart + 1,prestart + leftpart,inorder,instart,inroot - 1, mp);

     /*
     preorder is NLR i.e. node left right
     inorder is LNR i.e. left node right
     prestart will be the element 2nd after root because just next after root will be left part
     preend will be the last element in array
     instart will be the next element after the root
     inend will be the last element of the array in inorder
     */

     root->right = constree(preorder,prestart + leftpart + 1,preend,inorder,inroot +1,inend,mp);

     return root;
    }
};
