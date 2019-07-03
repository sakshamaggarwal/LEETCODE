class Solution {
public:
    int helper(vector<vector<int>>& grid, int a,int b)
    {
                //in helper call & k ...k++
                // if(b<grid[0].size())
                //      helper(grid,a,b+1,k);
                // if(a<grid.size())
                //      helper(grid,a+1,b,k);
                // if(a-1>0)
                //     helper(grid,a-1,b,k);
                // if(b-1>0)
                //     helper(grid,a,b-1,k);        
        if(a<0||a>=grid.size()||b<0||b>=grid[0].size()||grid[a][b]==0)
            return 0;
        grid[a][b]=0;
        return (helper(grid,a+1,b)+helper(grid,a-1,b)+helper(grid,a,b+1)+helper(grid,a,b-1)+1);
    }
    
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        
        int n1=grid.size();
        int n2=grid[0].size();
        int maxi=0;
        for(int i=0;i<n1;i++)
        {
            for(int j=0;j<n2;j++)
            {
                if(grid[i][j]==1)
                    maxi=max(maxi,helper(grid,i,j));
            }
        }
        return maxi;
    }
};
