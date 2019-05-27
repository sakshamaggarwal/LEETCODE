class Solution {
public:
    int heightChecker(vector<int>& heights) {
        
        vector<int> k(heights);
        
        sort(heights.begin(),heights.end());
        int n=k.size();
        int num=0;
        
        for(int i=0;i<n;i++)
        {
            if(k[i]!=heights[i])
                num++;
        }
        return num;
    }
};
