class Solution {
public:
    int rob(vector<int>& nums) {
        
        int n=nums.size();
        int sum=0,tot=0,k;
        for(int i=0;i<n;i++)
        {
            k=sum;
            sum=max(nums[i]+tot,sum);
            tot=k;
        }
        return sum;
    }
};
