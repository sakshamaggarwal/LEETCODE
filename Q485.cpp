class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        
        int n=nums.size(),k=0,s=0;
        
        if((n==1)&&(nums[0]==1))
            return 1;
            
        for(int i=0;i<n;i++)
        {
            k=0;
            while((nums[i]==1)&&(i<n-1))
            {
                k++;
                i++;
            }
            if((i==n-1)&&(nums[i]==1))
                k++;            
            if(k>s)
                s=k;
        }
        return s;
    }
};
