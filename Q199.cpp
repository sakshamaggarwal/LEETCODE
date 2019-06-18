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
    
    void check(TreeNode* root,int level, vector<int>& a)
    {
        if(root==NULL)
            return ;
        if(a.size()<=level)
            a.push_back(root->val); 
        
        check(root->right,level+1,a);       //root->left
        check(root->left,level+1,a);        //root->right   for left side...
        return;
    }
    vector<int> rightSideView(TreeNode* root) {
        
        vector<int> a;
        check(root,0,a);
        return a;
    }
};
