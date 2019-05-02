class Solution {
public:
    int thirdMax(vector<int>& nums) {
        
        int i,n=nums.size();  
        sort(nums.begin(),nums.end());
        
        if(n==1)
            return nums[0];
        if(n==2)
            return max(nums[0],nums[1]);
        for(i=0;i<n;i++)
        {
            while((nums[i]==nums[i+1])&&(i<n-1))
            {
                for(int j=i;j<n-1;j++)
                {
                    nums[j]=nums[j+1];
                }
                n--;
            }
          
            if((i+2)>=n)
            {
                break;
            }
        }
        
        if(n==1)
            return nums[0];
        if(n==2)
            return max(nums[0],nums[1]);
       
        int k=min(nums[n-2],nums[n-3]);
        return k;
        
    }
};
