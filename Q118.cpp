class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        
        vector<vector<int>> a;
        vector<int> v;
        int n;
        
        for(int i=0;i<numRows;i++)
        {
            //             for(int k=0;k<numRows-i;k++)
            //                {
            //                   a[i].push_back(" ");
            //                }                  
            
            n=1;
            for(int j=0;j<i+1;j++)
            {
                v.push_back(n);
                n=n*(i-j)/(j+1);
            }
            
            a.push_back(v);
            v.clear();
        }
        return a;
    }
};
