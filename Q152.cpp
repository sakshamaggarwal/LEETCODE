class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        int n=nums.size();
        if(n==1)
            return nums[0];
        int minp=1,maxp=1,best=0;
        
        for(int i=0;i<n;i++)
        {
            if(nums[i]<0)                       //if number is negative
                swap(minp,maxp);                //for negative numbers
            minp=min(minp*nums[i],nums[i]);     //find max negative 
            maxp=max(maxp*nums[i],nums[i]);     //find max positive
            best =max(maxp,best);
        }
        return best;
    }
};
