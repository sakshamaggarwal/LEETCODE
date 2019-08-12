class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        
        vector<int> a;
        int n1=matrix.size();
        int n2=matrix[0].size();
        for(int i=0;i<n1;i++)
        {
            for(int j=0;j<n2;j++)
                a.push_back(matrix[i][j]);
        }
        sort(a.begin(),a.end());
        return a[k-1];
    }
};
