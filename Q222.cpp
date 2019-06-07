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
    int a;
    int count(TreeNode* root)
    {
        if(root==NULL)
            return 0;
        count(root->left);
        count(root->right);
        return a++;
    }
    int countNodes(TreeNode* root) {
        a=0;
        count(root);
        return a;
    }
};
