class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        
        if(n<k)
            return 0;

        if((n==k)||(k==1))
            return nums[n-k];
            
        k--;
        int i;
        for(i=n-1;i>0;i--)
        {
            if((n-i)==k)
                return nums[i-1];
        }
        return nums[i];
    }
};
