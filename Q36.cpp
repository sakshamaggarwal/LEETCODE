class Solution {
public:
    bool check(char c, int i,int j,vector<vector<char>> board)
    {
        for(int k=0;k<9;k++)
        {
            if(board[i][k]==c)
                return false;
            if(board[k][j]==c)
                return false;
        }
        int a=(i/3)*3;
        int b=(j/3)*3;
        
        for(int k=a;k<a+3;k++)
        {
            for(int p=b;p<b+3;p++)
            {
                if(board[k][p]==c)
                    return false;
            }
        }
        return true;
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        
        char c;
        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                if(board[i][j]=='.')
                    continue;
                c=board[i][j];
                board[i][j]+='a';       //for the char we checking...
                if(!check(c,i,j,board))
                    return false;
            }
        }
        return true;
    }
};
