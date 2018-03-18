class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
       
        int mid,high,low;
        high=nums.size()-1;
        low=0;
        while(low<=high)
        {
            mid=(high+low)/2;
            if(target==nums[mid])
                return mid;
            else if(target>nums[mid])
                low=mid+1;
            else if(target<nums[mid])
                high=mid-1;
        }
        
        return low;
    }
};
