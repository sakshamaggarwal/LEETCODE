class Solution {
public:
    bool canplace(vector<vector<char>> &board,int a,int b,char val)
    {
        for(int j=0;j<9;j++)
        {
            if(board[j][b]==val)
                return false;
            if(board[a][j]==val)
                return false;
        }
        int aa=(a/3)*3;
        int bb=(b/3)*3;
        
        for(int k=aa;k<aa+3;k++)
        {
            for(int p=bb;p<bb+3;p++)
            {
                if(board[k][p]==val)
                    return false;
            }
        }
        return true;
    }
    bool solvesudo(vector<vector<char>> &board, int a ,int b)
    {
        if(a==9)
            return true;
        if(b==9)
            return solvesudo(board,a+1,0);
        if(board[a][b]!='.')
            return solvesudo(board,a,b+1);
        else
        {
            for(char i='1';i<='9';i++)          //int i+'0'
            {
                if(canplace(board,a,b,i))
                {
                    board[a][b]=i;
                    if(solvesudo(board,a,b+1))
                        return true;
                    
                }
            }
        }
        board[a][b]='.';
        return false;
    }
    bool solveSudoku(vector<vector<char>>& board) {
        
        return solvesudo(board,0,0);
    }
};
