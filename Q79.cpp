class Solution {
public:
    bool helper(string word, vector<vector<char>> board, int i, int j)
    {
        if(word.size()==0)
            return true;
        if((i<0)||(j<0)||(i>=board.size())||(j>=board[0].size()))
            return false;
        if(board[i][j]==word[0])
        {
            char c=board[i][j];
            board[i][j]='.';               //**substr**
            if( helper(word.substr(1),board,i+1,j)||helper(word.substr(1),board,i,j+1)||helper(word.substr(1),board,i-1,j)||helper(word.substr(1),board,i,j-1) ) 
                return true;
            board[i][j]=c;
        }
        return false;
        
    }
    bool exist(vector<vector<char>>& board, string word) {
        
        int n1=board.size();
        int n2=board[0].size();
       
        for(int i=0;i<n1;i++)
        {
            for(int j=0;j<n2;j++)
            {
                if(word[0]==board[i][j])
                {
                    if(helper(word,board,i,j))
                        return true;
                }
            }
        }
        return false;
    }
};
