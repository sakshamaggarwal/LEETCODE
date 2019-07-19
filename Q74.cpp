class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int a=matrix.size();
        if(a==0)
            return 0;
        int b=matrix[0].size()-1;
        if((a==1)&&(b==-1))
            return false;
        int mid,j=0,k=0;
    
        for(int i=0;i<a;i++)
        {
            if(matrix[i][b]==target)
                return true;
            if(matrix[i][b]<target)
                continue;
            else
            {
                while(j<=b)
                {
                    mid=(j+b)/2;
                    if(matrix[i][mid]==target)
                        return true;
                    else if(matrix[i][mid]>target)
                    {
                        b=mid-1;
                    }
                    else
                    {
                        j=mid+1;
                    }
                }
                return false;
            }
        }
        return false;
    }
};
