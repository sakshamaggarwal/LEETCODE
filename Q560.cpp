class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        
        int n=nums.size();
        int t=0,sum=0,p=0;
        
        if(n==1)
            if(nums[0]==k)
                return 1;
            else
                return 0;
        
        for(int i=0;i<n;i++)
        {
            sum=0;
            for(int j=i;j<n;j++)
            {
               //  if(nums[i]==k)
               //  {
               //      if(k!=0)
               //      {
               //          p++;
               //          continue;
               //      }
               // 
                sum+=nums[j];
                if(sum==k)
                    p++;
            }
        }
        return p;
    }
};
