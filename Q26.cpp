class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j,i=0;
        int n=nums.size();    
        
        if(n==0)
            return 0;
        else if(n==1)
            return 1;
        
        for(j=1;j<n;j++)
        {
            if(nums[i]!=nums[j])
            {
                i++;
                nums[i]=nums[j];
            }
                             
        }
              
        return i+1;
        
    }
};
