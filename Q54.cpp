class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
        vector<int> v;
        int a=matrix.size();
        if(a==0)
            return v;
        int b=matrix[0].size();
        int j=0,i=0,k;
        
        while(i<a&&j<b)
        {
            for(k=j;k<b;k++)
            {
                v.push_back(matrix[i][k]);
            }
            i++;
            for(k=i;k<a;k++)
            {
                v.push_back(matrix[k][b-1]);
            }
            b--;
            if(i<a)
            {
                for(k=b-1;k>=j;k--)
                {
                    v.push_back(matrix[a-1][k]);
                }
            }
            a--;
            if(j<b)
            {
                for(k=a-1;k>=i;k--)
                {
                    v.push_back(matrix[k][j]);
                }
            }
            j++;
        }
        return v;
    }
};
