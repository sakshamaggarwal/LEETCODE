//  Take first row and col and set 0 at those positions...
//  Take another matrix and check in it and update in this...

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {

        int n=matrix.size();
        int n2=matrix[0].size();
        
        int o=0,p=0;
        for(int i=0;i<n;i++)
        {
            if(matrix[i][0]==0)
                p=1;
        }
        for(int i=0;i<n2;i++)
        {
            if(matrix[0][i]==0)
                o=1;
        }
        for(int i=1;i<n;i++)
        {
            for(int j=1;j<n2;j++)
            {
                if(matrix[i][j]==0)
                {
                    matrix[0][j]=0;
                    matrix[i][0]=0;
                }
            }
        }
        for(int i=1;i<n;i++)
        {
            for(int j=1;j<n2;j++)
            {
                if((matrix[i][0]==0)||(matrix[0][j]==0))
                {
                    matrix[i][j]=0;
                }
            }
        }
        if(p==1)
            for(int i=0;i<n;i++)
                matrix[i][0]=0;
        if(o==1)
            for(int i=0;i<n2;i++)
                matrix[0][i]=0;
    }
};
