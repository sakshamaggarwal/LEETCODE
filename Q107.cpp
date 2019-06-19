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
    vector<vector<int>> a;
    void helper(TreeNode* root, int level)
    {
        if(root==NULL)
            return;
        if(a.size()==level)
            a.push_back(vector<int>());
        a[level].push_back(root->val);
        
        helper(root->left,level+1);
        helper(root->right,level+1);
        return;
    }
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        
        helper(root,0);
        reverse(a.begin(),a.end());
        return a;
    }
};
