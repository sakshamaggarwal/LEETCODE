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
    int moves;
    int distributeCoins(TreeNode* root) {
        moves=0;
        helper(root);
        return moves;
    }
    int helper(TreeNode* root)
    {
        if(root==NULL)
            return 0;
        int left=helper(root->left);
        int right=helper(root->right);
        moves+=abs(left)+abs(right);
        return root->val+left+right-1;
    }
};
