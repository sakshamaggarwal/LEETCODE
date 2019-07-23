class Solution {
public:
    void helper(vector<vector<int>>& v, vector<int> a, vector<int> candidates,int c,int target)
    {
        if(target==0)
            v.push_back(a);
        else
        {
            for(int i=c;i<candidates.size();i++)
            {
                if(candidates[i]>target)
                    return;
                if(candidates[i]<=target)
                {
                    a.push_back(candidates[i]);
                    helper(v,a,candidates,i,target-candidates[i]);
                    //helper(v,a,candidates,i+1,target-candidates[i]);
                    a.pop_back();
                }
            }
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
        vector<vector<int>> v;
        vector<int> a;
        sort(candidates.begin(),candidates.end());
        
        helper(v,a,candidates,0,target);
        return v;
    }
};
