class Solution {
public:
    void helper(vector<int> nums,int i,vector<vector<int>> &a )
    {
        if(i==nums.size())
            a.push_back(nums);
        else
        {
            for(int j=i;j<nums.size();j++)
            {
                swap(nums[i],nums[j]);
                helper(nums,i+1,a);
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        
        vector<vector<int>> a;
        helper(nums,0,a);
        return a;
    }
};
