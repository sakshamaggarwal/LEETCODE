class Solution {
public:
    bool backspaceCompare(string S, string T) {
        
        int a=S.length()-1;
        int b=T.length()-1;
        int i=a,t=0,j=b,c=0,d=0;
        
        while(i>=0||j>=0)
        {   
         while(i>=0)
         {
           if(S[i]=='#')
            {
                c++;
                i--;
                t=1;
            }
            else if(c>0)
             {
                 c--;
                 i--;
             }
             else
                 break;
         }
         while(j>=0)
         {
            if(T[j]=='#')
            {
                d++;
                j--;
                t=1;
            }
            else if(d>0)
            {
                d--;
                j--;
            }
            else
                break;
         }
         
            if((i>=0)&&(j>=0)&&(S[i]!=T[j]))
                return false;

            if((i>=0)!=(j>=0))
                return false;
            
                    i--;
                    j--;
        }
        return true;
    }
};
