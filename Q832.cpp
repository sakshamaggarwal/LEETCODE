class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        
        int n=A.size();
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<A[i].size();j++)
            {
                if(A[i][j]==1)
                    A[i][j]=0;
                else
                    A[i][j]=1;
            }
            reverse(A[i].begin(),A[i].end());
        }
        return A;
    }
};
