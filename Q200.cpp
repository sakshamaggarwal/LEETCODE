class Solution {
public:
    void check(vector<vector<char>>& grid,int i,int j)
    {
        if((i<0)||(i>=grid.size())||(j<0)||(j>=grid[i].size())||(grid[i][j]=='0'))
            return;
        grid[i][j]= '0';
        check(grid,i+1,j);
        check(grid,i-1,j);
        check(grid,i,j+1);
        check(grid,i,j-1);
    }
    
    int numIslands(vector<vector<char>>& grid) {
        
        int n=grid.size();
        int k=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<grid[i].size();j++)
            {
                if(grid[i][j]=='1')
                {
                    k++;
                    check(grid,i,j);
                }
            }
        }
        return k;
    }
    
};
