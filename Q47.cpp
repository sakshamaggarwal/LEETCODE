class Solution {
public:
    void helper(vector<int> nums,vector<vector<int>> & a,int k)
    {
        if(k==nums.size())
            a.push_back(nums);
        else
        {
            for(int i=k;i<nums.size();i++)
            {
                if((i==k)||(nums[i]!=nums[k]))
                {
                    swap(nums[i],nums[k]);
                    helper(nums,a,k+1);
                }
            }
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        vector<vector<int>> a;
        helper(nums,a,0);
        return a;
    }
};
