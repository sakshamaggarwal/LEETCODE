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
    int minDepth(TreeNode* root) {
        
        if(root==NULL)
            return 0;
        if((root->left==NULL)&&(root->right==NULL))
            return 1;
        int n=INT_MAX;
        if(root->left!=NULL)
        {
            n=min(n,minDepth(root->left));
        }
        if(root->right!=NULL)
        {
            n=min(n,minDepth(root->right));
        }
        
        return n+1;                 //min(1+minDepth(root->left),1+minDepth(root->right));
    }
};
