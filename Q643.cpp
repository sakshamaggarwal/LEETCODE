class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        
        long double a=0;
        long int n=nums.size(),sum=0,i,tot;
        
        for(i=0;i<k;i++)
        {
            sum+=nums[i];
        }
        tot=sum;
        for(;i<n;i++)
        {
            sum+=nums[i]-nums[i-k];
            tot=max(tot,sum);
        }
        a=tot;
        return a/k;
    }
};
