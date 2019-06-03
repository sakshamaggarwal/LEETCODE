class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        
        int n=nums.size(),i;
        map<int,int> m;
        for(i=0;i<n;i++)
        {
            m[nums[i]]=i;
        }
        nums.clear();
        for(i=1;i<=n;i++)
        {
            if(m.find(i)==m.end())
                nums.push_back(i);
        }
        return nums;
    }
};
