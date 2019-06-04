class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        int n=nums.size();
        int p=1,k=0;
        
        for(int i=0;i<n;i++)
        {
            if(nums[i]==0)
            {
                k++;
                continue;
            }
           p*=nums[i];
        }
        
        for(int i=0;i<n;i++)
        {
            if(k>1)
                nums[i]=0;
            else if((k==1)&&(nums[i]==0))
            {
                nums[i]=p;
            }
            else if(k==1)
                nums[i]=0;
            else
                nums[i]=p/nums[i];
        }
        return nums;
    }
};
