class Solution {
public:
    
    bool check(char a)
    {
        if(((a>='a')&&(a<='z'))||((a>='A')&&(a<='Z')))
            return true;
        return false;
    }
    
    string reverseOnlyLetters(string S) {
        
        int n=S.length();
        int i=0,j=n;
        while(i<j)
        {
           while((!check(S[i]))&&(i<j))
           {
               i++;
               continue;
           }
            while((!check(S[j]))&&(i<j))
            {
                j--;
                continue;
            }
            swap(S[i],S[j]);
            i++;
            j--;
        }
        return S;
    }
};
