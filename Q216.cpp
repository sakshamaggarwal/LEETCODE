class Solution {
public:
    void helper(vector<int> a,vector<vector<int>> &v, int k,int n,int b)
    {
        if((n==0)&&(k==0))
            v.push_back(a);
        if(b>n)
            return;
        if(k<=0)
            return;
        for(int i=b;i<=9;i++)
        {
            if(i>n)
                return;
            if(i<=n)
            {
                a.push_back(i);
                helper(a,v,k-1,n-i,i+1);
                a.pop_back();
            }
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        
        vector<vector<int>> v;
        vector<int> a;
        
        helper(a,v,k,n,1);
        return v;
    }
};
