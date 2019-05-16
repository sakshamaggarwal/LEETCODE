class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        long int sum=1;
        long int sum2=INT_MIN;
        long int n=nums.size();
       
        sum=nums[n-1]*nums[n-2]*nums[n-3];
        sum2=nums[0]*nums[1]*nums[n-1];
        return max(sum,sum2);
    }
};
