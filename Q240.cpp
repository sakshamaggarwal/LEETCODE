class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int a=matrix.size()-1;
        if(a==-1)
            return false;
        int b=matrix[0].size();
        int j=0;
        
        while((a>=0)&&(j<b))
        {
            if(matrix[a][j]>target)
                a--;
            else if(matrix[a][j]<target)
                j++;
            else
                return true;
        }
        return false;
    }
};

//  optimized brute force : 

// class Solution {
// public:
//     bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
//         int a=matrix.size();
//         if(a==0)
//             return false;
//         int b=matrix[0].size();
//         int p=1,o=1;
//         for(int i=0;i<a;i++)
//         {
//             for(int j=0;j<b;j++)
//             {
//                 if((matrix[i][b-1]==target)||(matrix[a-1][j]==target))
//                     return true;
//                 if(matrix[i][b-1]<target)
//                     break;
//                 if(matrix[a-1][j]<target)
//                    continue;
//                 for(int k=0;k<a;k++)
//                 {
//                     if(matrix[k][j]==target)
//                         return true;
//                     p=0;
//                 }
//                 if(p!=1)
//                     o=0;
//             }
//             if(o==0)
//                 return false;
//         }
//         return false;
//     }
// };
