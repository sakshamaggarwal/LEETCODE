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
    void helper(TreeNode*& root,vector<int>& a)
    {
        if((!root->left)&&(!root->right))
        {
            a.push_back(root->val);
            root=NULL;
        }
        else
        {
            if(root->left)
                helper(root->left,a);
            if(root->right)
                helper(root->right,a);
        }
        return;
    }
    
    vector<vector<int>> findLeaves(TreeNode* root) {
        
        vector<vector<int>> leav;
        vector<int> a;
        while(root)
        {
            helper(root,a);
            leav.push_back(a);
            a.clear();
        }
        return leav;
    }
};
