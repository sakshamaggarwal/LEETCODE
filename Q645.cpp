class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        
        vector<int> a;
        int n=nums.size(),o,i,k=0;
        
        sort(nums.begin(),nums.end());
        
        for(i=0;i<n-1;i++)
        {
            if(nums[i]==nums[i+1])
            {
                a.push_back(nums[i]);
                o=i;
            }
        }
        
        if(nums[0]!=1)
        {
            a.push_back(1);
            return a;
        }
        
        for(i=0;i<n-1;i++)
        {
            if((nums[i+1]-nums[i]!=1)&&(i!=o))
            {
                a.push_back(nums[i]+1);
                k=1;
            }
        }
        if(k==0)
            a.push_back(nums[i]+1);
        return a;
    }
};
