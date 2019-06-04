class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int n=nums.size();
        int sum=nums[0],tot=nums[0];
        for(int i=1;i<n;i++)
        {
            tot=max(nums[i],nums[i]+tot);
            sum=max(sum,tot);
        }
        return sum;
    }
};


// GOod Solutioon---
// class Solution {
// public:
//     int maxSubArray(vector<int>& nums) {
        
//         int n=nums.size();
//         int sum=nums[0];
        
//         for(int i=1;i<n;i++)
//         {
//             if(nums[i-1]>0)
//                 nums[i]+=nums[i-1];
//             sum=max(nums[i],sum);
//         }
//         return sum;
//     }
// };
