class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        
        int n=nums.size();
        map<int,vector<int>> m;
        
        for(int i=0;i<n;i++)
        {
            m[nums[i]].push_back(i);
        }
        int degree=0,k;
        for(auto it: m)
        {
            k=it.second.size();
            degree=max(degree,k);
        }
        k=INT_MAX;
        for(auto it : m)
        {
            if(it.second.size()==degree)
                k = min(k,it.second.back()-it.second[0]+1);
        }
        return k;
    }
};
