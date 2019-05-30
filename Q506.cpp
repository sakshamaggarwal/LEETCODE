class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& nums) {
        
        int n=nums.size(),i=3;
        vector<string> s;
        vector<int> a(nums);
        sort(nums.begin(),nums.end());
        int t=0;
        
        for(int j=0;j<nums.size();j++)
        {
            t=1;
            for(int i=nums.size()-1;i>=0;i--)
            {
                if(a[j]==nums[i])
                {
                    if(t==1)
                        s.push_back("Gold Medal");
                    else if(t==2)
                        s.push_back("Silver Medal");
                    else if(t==3)
                        s.push_back("Bronze Medal"); 
                    else
                        s.push_back(to_string(t));
                    break;
                }
             t++;
            }
        }
        return s;
    }
};
