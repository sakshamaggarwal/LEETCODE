class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        
        int n=nums.size();
        int m=0,sum=0,a=0;
       
        if(n==1)
            return 0;
        
        for(int i=0;i<n;i++)
            sum+=nums[i];
       
        for(int i=0;i<n-1;i++)
        {
           
            a=m;
            m+=nums[i];
            sum=sum-nums[i]-nums[i+1];
            
            if(a==0)
            {
                sum+=nums[i+1];
                if((sum==0)&&(a==0))
                    return 0;
                else
                    sum-=nums[i+1];
            }
            if(m==sum)
                return i+1;
            sum+=nums[i+1];
            
            if((sum==0)&&(a==0))
                return 0;
        }
        
        return -1;
        
    }
};
