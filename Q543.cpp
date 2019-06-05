/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int a;
    int depth(TreeNode* root)
    {
        if(root==NULL)
            return 0;
        int l=depth(root->left);
        int r=depth(root->right);
        a=max(a,r+l+1);
        return max(l,r)+1;
    }
    int diameterOfBinaryTree(TreeNode* root) {      
        
        a=1;
        depth(root);
        return a-1;
        
    }
};
