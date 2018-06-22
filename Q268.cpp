class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size(),i;
        sort(nums.begin(),nums.end());
        if(n<2)
        {
            
        if(nums[0]==0)
            return 1;
        else
            return 0;
        }
            int k=0;
            if(nums[0]!=0)
                return 0;
        for(i=nums[k];i<nums[k]+n;i++,k++)
        {
            if(nums[k]!=i)
                return i;
        }
        return i;
    }
};
