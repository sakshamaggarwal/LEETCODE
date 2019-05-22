class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        
        int a=ransomNote.length(),b=magazine.length();
        int k=0,o=0;
        for(int i=0;i<a;i++)
        {
            for(int j=0;j<b;j++)
            {
                k=0;
                if(ransomNote[i]==magazine[j])
                {
                    while(j<b)
                    {
                        magazine[j]=magazine[j+1];
                        j++;
                    }
                    b--;
                    k=1;
                    break;
                }
            }
            
            place:
            
            if(k==0)
                return false;
        }
        
        return true;
    }
};
