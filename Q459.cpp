class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        
        int n=s.size();
        if(n<=1)
            return false;
        int i=n/2;
        while(i>0)
        {
            
            while(n%i!=0)
                i--;
        int o=0;
        int k=n/i;
        for(int j=0;j<k-1;j++)
        {
            if(s.substr(j*i,i)!=s.substr(j*i+i,i))
                o=1;
        }
            if(o==0)
                return true;
            i--;
        }
        return false;
    }
};
