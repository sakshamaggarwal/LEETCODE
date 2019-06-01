class Solution {
public:
    int strStr(string haystack, string needle) {
        
        int a=haystack.length();
        int b=needle.length();
        
        if(b>a)
            return -1;
        else if(((b==a)&&(haystack==needle))||(b==0))
            return 0;
        
        int i,j,k;
        
            for(i=0;i<a;i++)
            {
                if(haystack[i]==needle[0])
                {
                    k=i;
                    j=0;
                    while(b>j)
                    {
                        i++;
                        j++;
                        if((a-i)<(b-j))
                            break;
                        if(haystack[i]!=needle[j])
                            break;
                    }
                    if(b==j)
                        return k;
                    else
                        i=k;
                }
            }
        return -1;
    }
};
