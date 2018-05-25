class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            for(int j=1;j<n;j++)
            {
                if(i==j)
                    break;
                if(nums[i]+nums[j]==target)
                {
                    cout<<nums[i]+nums[j]<<i<<j;
                    vector<int> k;
                    k.push_back(i);
                    k.push_back(j);
                    return k;
                }
                
            }
        }
        
    }
};
