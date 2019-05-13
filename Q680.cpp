class Solution {
public:
    bool validPalindrome(string s) {
        
        int j=s.length()-1;
        int i=0,k=0,o=0,a,b,d;
        while(i<j)
        {
            if(k>2)
                break;
            if(s[i]==s[j])
            {
                i++;
                j--;
            }
            else if(s[i]==s[j-1])
            {
                o=1;
                a=i;
                b=j;
                d=k;
                k++;
                j--;
             
            }
            else if(s[i+1]==s[j])
            {
                place :
                i++;
                k++;
                o=0;
            }
            else
            { 
                k+=2;
                i++;
                j--;
             if(o==1){
                 i=a;
                 j=b;
                 k=d;
                 goto place;
             }
            }
        }
        if(k>1)
            return false;
        return true;
    }
};
