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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        
        int n=nums.size();
        if(n==0)
            return NULL;
        if(n==1)
            TreeNode* root=new TreeNode(nums[0]);
        int m=n/2;
        
        TreeNode* root=new TreeNode(nums[m]);
        vector<int> l(nums.begin(),nums.begin()+m);
        vector<int> r(nums.begin()+m+1,nums.end());
        
        root->left=sortedArrayToBST(l);
        root->right=sortedArrayToBST(r);
        
        return root;
    }
};
