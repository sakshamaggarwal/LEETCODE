class Solution {
public:
    bool judgeCircle(string moves) {
        
        int a=0,b=0;
        int n=moves.size();
        
        for(int i=0;i<n;i++)
        {
            switch(moves[i])
            {
                case 'U': a++;
                    break ;
                case 'D': a--;
                    break;
                case 'R' : b++;
                    break;
                case 'L' : b--;
            }
        }
        if((a==0)&&(b==0))
            return true;
        return false;
    }
};
