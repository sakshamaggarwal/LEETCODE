class Solution {
public:
    string reverseVowels(string s) {
        
        int n=s.length();
      
        for(int i=0,j=n-1;i<=n;i++)
        {
            
         int c=1;
            
             if(i>j)
                {
                    
                    return s;
                };
            
            if((s[i]=='a')||(s[i]=='e')||(s[i]=='i')||(s[i]=='o')||(s[i]=='u')||(s[i]=='A')||(s[i]=='E')||(s[i]=='I')||(s[i]=='O')||(s[i]=='U'))
            {
                while(c!=0)
                {
                    if((s[j]!='a')&&(s[j]!='e')&&(s[j]!='i')&&(s[j]!='o')&&(s[j]!='u')&&(s[j]!='A')&&(s[j]!='E')&&(s[j]!='I')&&(s[j]!='O')&&(s[j]!='U'))
                    {
                        j-=1;
                        
                    }
                    else
                    {
                        
                     c=0;
                        swap(s[i],s[j]);
                        
                    j--;}
                    
               
                }
            }
        }
        return s;
        
    }
};
