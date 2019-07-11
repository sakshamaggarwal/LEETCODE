//      similar for any number of sums..just increase one loop everytime...

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        int n=nums.size();
        vector<vector<int>> vf;
        vector<int> v;
        sort(nums.begin(),nums.end());
        
        for(int i=0;i<n;i++)
        {
            int l=i+1;
            if((i>0)&&(nums[i]==nums[i-1]))
                continue;
            int r=n-1;
            
            while(r>l)
            {
                int sum=nums[i]+nums[l]+nums[r];
                if(sum>0)
                    r--;
                else if(sum<0)
                    l++;
                else
                {
                    v.push_back(nums[i]);
                    v.push_back(nums[l]);
                    v.push_back(nums[r]);
                    vf.push_back(v);
                    v.clear();
                    while((r>l)&&(nums[l]==nums[l+1]))
                        l++;
                    while((r>l)&&(nums[r]==nums[r-1]))
                        r--;
                    r--;
                    l++;
                }
            }
        }
        return vf;
    }
};
