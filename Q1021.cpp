class Solution {
public:
    string removeOuterParentheses(string S) {
        
        int n=S.length();
        string a;
        int i=0,k=0;
        
        while(n>=i)
        {
            if((S[i]=='(')&&(k++>0))
                a+=S[i];
            else if((S[i]==')')&&(k-- > 1))
                a+=S[i];
            i++;
        }
        return a; 
    }
};
