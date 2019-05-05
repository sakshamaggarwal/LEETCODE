class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        
        int n=nums.size();
        sort(nums.begin(),nums.end());
        
        for(int i=0;i<n;i++)
        {
            if(nums[i]==val)
            {
                for(int j=i;j<n-1;j++)
                {
                    nums[j]=nums[j+1];
                }
                n--;
            if(nums[i]==val)              //****For Duplicate***
                i-=1;
            }
        }
        return n;
    }
};
