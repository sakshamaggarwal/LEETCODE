class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        
        int n1=grid.size();
        int n2=grid[0].size();
        int a=0;
        for(int i=0;i<n1;i++)
        {
            for(int j=0;j<n2;j++)
            {
                if(grid[i][j]==1)
                {
                    a+=4;
                    if(j-1>=0)
                        if(grid[i][j-1]==1)
                            a--;
                    if(i-1>=0)
                        if(grid[i-1][j]==1)
                            a--;
                    if(i+1<n1)
                        if(grid[i+1][j]==1)
                            a--;
                    if(j+1<n2)
                        if(grid[i][j+1]==1)
                            a--;
                    
                }
            }
        }
        return a;
    }
};
