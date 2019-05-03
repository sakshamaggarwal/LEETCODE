class Solution {
public:
    bool detectCapitalUse(string word) {
        
        int n=word.length(),k=0;
        
        if(n==1)
        {
            return true;
        }
        for(int i=1;i<n;i++)
        {
            if(word[0]>95)
                while(i<n)
                {
                    if(word[i]>95)
                        k=1;
                    else
                        return false;
                    i++;
                }
            if((word[0]<95)&&(word[1]>95))
            {
                while(i<n)
                {
                        if(word[i]>95)
                            k=1;
                        else
                            return false;
                    i++;
                }
            }
            else if((word[0]<95)&&(word[1]<95))
            {
                while(i<n)
                {
                        if(word[i]<95)
                            k=1;
                        else
                            return false;
                    i++;
                }
            }
            if(k==1)
                return true;
                
        }
        return false;
    }
};
