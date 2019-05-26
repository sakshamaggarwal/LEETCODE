class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        
        int n=nums.size();
        if(n==0)
            return nums;
        
        int j,k=0,u=0;
        vector<int> a;
        
        for(int i=0;i<n-1;i++)
        {
            k=0;u=0;
            j=i+1;
                while((u<n)&&(i!=j))
                {
                 if(nums[i]<nums[j])
                 {
                     a.push_back(nums[j]);
                     k=1;
                     break;
                 }   
                 if(j==n-1)
                    {
                        j=0;
                     continue;
                    }
                    u++;
                 j++;
                }
            if(k==0)
                a.push_back(-1);
        }
        j=0;
        for(int i=0;i<n;i++)
        {
            if(nums[n-1]<nums[i])
            {
                j=1;
                a.push_back(nums[i]);
                break;
            }
        }
        if(j==0)
            a.push_back(-1);
        return a;
    }
};
