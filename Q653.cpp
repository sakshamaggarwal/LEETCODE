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
    void helper(TreeNode* root, vector<int>& a)
    {
        if(root==NULL)
            return;
        helper(root->left,a);
        a.push_back(root->val);         // ***** for Ascending order 
        helper(root->right,a);
    }
    bool findTarget(TreeNode* root, int k) {
        
        vector<int> a;
        helper(root,a);
        int j=a.size()-1,i=0,sum=0;
        for(int k=0;k<j+1;k++)
            cout<<a[k];
        while(i<j)
        {
            if(a[i]+a[j]==k)
                return true;
            else if(a[i]+a[j]<k)
                i++;
            else 
                j--;
        }
        return false;
    }
};
