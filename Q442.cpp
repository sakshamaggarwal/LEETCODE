class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        
        map<int,int> m;
        int n=nums.size(),o;
        for(int j:nums)
        {
            m[j]++;
        }
        nums.clear();
        for(auto it:m)
        {
            o=it.second;
            if(o==2)
                nums.push_back(it.first);
        }
        return nums;
    }
};
