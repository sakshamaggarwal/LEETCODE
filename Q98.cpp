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
    bool isValidBST(TreeNode* root) {
        return help(root, LONG_MIN, LONG_MAX);      //INT
    }
    
    bool help(TreeNode* root, long min, long max){  //INT
        if(root==NULL)
            return true;
        if(root->val <= min || root->val >= max)
            return false;
        return help(root->left, min, root->val) && help(root->right, root->val, max);
    }
};
