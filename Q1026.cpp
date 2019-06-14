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
    void helper(TreeNode* root,int& diff,int maxi,int mini)
    {
        if(root==NULL)
            return ;
        
        
        maxi=max(root->val,maxi);
        mini=min(root->val,mini);
        diff=max(diff,abs(maxi-mini));
        
        helper(root->left,diff,maxi,mini);
        helper(root->right,diff,maxi,mini);
        return ;
    }
    int maxAncestorDiff(TreeNode* root) {
        
        int diff=0;
        helper(root,diff,INT_MIN,INT_MAX);
        return diff;
    }
};
