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
    void calc(TreeNode* root, double target,int& a)
    {
        if(root==NULL)
            return;
        
        if(abs(a-target)>abs(root->val-target))
        {
            a=root->val;
        }
        if(target<=root->val)
            calc(root->left,target,a);
        else
            calc(root->right,target,a);
        
        return;
    }
    
    int closestValue(TreeNode* root, double target) {
        
        int a=root->val;
        calc(root,target,a);
        return a;   
    }
};
