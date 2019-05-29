class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        map<int,int> m;
        vector<vector<int>> a(nums.size()+1);
        vector<int> f;
        
        for(int i:nums)
        {
            m[i]++;
        }
        
        for(auto it:m)
        {
            a[it.second].push_back(it.first);          //***
        }
         
        for(int i=a.size()-1;i>=0;i--)
        {
            for(int top : a[i])
            {
                f.push_back(top);
                if(f.size()>=k)
                    return f;
            }
            
        }
        
        return f;
    }
};
