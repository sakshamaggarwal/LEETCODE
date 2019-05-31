class Solution {
public:
    int minAddToMakeValid(string S) {
    
        int n=S.length();
        int k=0,p=0;
        for(int i=0;i<n;i++)
        {
            if(S[i]=='(')
            {
                p++;
            }
            else
                p--;
           if(p==-1)        //for ')' greater
           {
               k++;
               p++;
           }
        }
        return p+k;
    }
};
