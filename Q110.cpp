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
    int check(TreeNode* root)
    {
        if(root==NULL)
            return 0;
        return max(check(root->left),check(root->right))+1;
        
    }
    bool isBalanced(TreeNode* root) {
        
        if(root==NULL)
            return true;
        int a=check(root->left);
        int b=check(root->right);
        return isBalanced(root->left) && isBalanced(root->right) && abs(a-b)<=1;
    }
};
