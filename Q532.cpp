class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int p=0;
       
        for(int i=0;i<n-1;i++)
        {
            if((k==0)&&(nums[i]==nums[i+1]))
            {
                while((nums[i]==nums[i+1])&&(i<n-2))
                {
                    i++;
                }
                p++;
                continue;
            }
            if(nums[i]==nums[i+1])
            {
                continue;
            }
            for(int j=i+1;j<n;j++)
            {
                 if(nums[j]==nums[j-1])
            {
                continue;
            }
                if(abs(nums[i]-nums[j])==k)
                    p++;
            }
        }
        return p;
        
    }
};
