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
    bool mirror(TreeNode* l,TreeNode* r) {
        
        if((l==NULL)&&(r==NULL))
            return true;
        if((l==NULL)||(r==NULL))
            return false;
        if(l->val!=r->val)
            return false;
        
        if(!mirror(l->right,r->left))
            return false;
        if(!mirror(l->left,r->right))
            return false;
        
        return true;
    }
    bool isSymmetric(TreeNode* root)
    {
        return mirror(root,root);
    }
};
