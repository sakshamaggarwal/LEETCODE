class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        
        int n=nums.size(),a=0,p=0;
        for(int i=0;i<n;i++)
        {
            if(a<nums[i])
            {
                a=nums[i];
                p=i;
            }
        }
        for(int i=0;i<n;i++)
        {
            if((nums[p]<nums[i]*2)&&(p!=i))
                return -1;
        }
        return p;
        
    }
};
