class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        
        int n=nums.size(),temp=0;
        
        if(n<=1)
            return true;
        
        for(int i=0;i<n-1;i++)
        {
            if(is_sorted(nums.begin(),nums.end()))
                return true;
            if(nums[i]>nums[i+1])
            {
                temp=nums[i];
                nums[i]=nums[i+1];
            
                if(is_sorted(nums.begin(),nums.end()))
                    return true;                                //check if sorted without nums[i]
                nums[i+1]=nums[i]=temp;
                if(is_sorted(nums.begin(),nums.end()))
                    return true;                                //check if sorted without nums[i+1]
            return false;
            }
        }
        return true;
    }
};
