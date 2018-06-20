class Solution {
public:
    
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int flag=0;
        if(n==0)
            return 1;
        for(int i=0;i<n;i++)
        {
            while(nums[i]==nums[i+1])
                i++;
            if(nums[i]>0)
            {
                int k=1;
                if(flag==0)
                    if(nums[i]!=1)
                        return 1;
                flag=1;
                 while(nums[i]==k)
                 {
                     i++,k++;
                     while(nums[i]==nums[i+1])
                         i++;
                 }
                if(flag==1)
                    return k;
            }
        }
        return 1;
        
     }
 };
