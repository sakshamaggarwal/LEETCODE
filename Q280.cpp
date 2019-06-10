class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        
        int n=nums.size();
        if(n<=1)
            return;
        sort(nums.begin(),nums.end());
        int k=(n+1)/2;
        for(int i=1;i<n;i+=2)
        {
            swap(nums[i],nums[k]);
            k++;
        }
    }
};
