class Solution {
public:
    void helper(vector<int> candidates,int a,vector<vector<int>>& num, vector<int> v,int target)
    {
        if(target==0)
        {
            num.push_back(v);
            return;
        }
        else
        {
            for(int i=a;i<candidates.size();i++)
            {
                if(candidates[i]>target)
                    return ;
                if(i&&candidates[i]==candidates[i-1]&&i>a)
                    continue;
                if(candidates[i]<=target)
                {
                    v.push_back(candidates[i]);
                    helper(candidates,i+1,num,v,target-candidates[i]);
                    v.pop_back();
                }
            }
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        
        vector<vector<int>> num;
        vector<int> v;
        sort(candidates.begin(),candidates.end());
        
        helper(candidates,0,num,v,target);
        
        return num;
    }
};
