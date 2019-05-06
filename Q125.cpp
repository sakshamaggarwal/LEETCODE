class Solution {
public:
    bool check(char ch)
    {
        return ((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z')||(ch>='0'&&ch<='9'));
    }
    
    bool isPalindrome(string s) {
        
        int j=s.size(),i=0;
        
        while(i<j)
        {
            if(!check(s[i]))
            {
                i++;
                continue;
            }
            if(!check(s[j]))
            {
                j--;
                continue;
            }
            cout<<s[i]<<s[j]<<abs(s[i]-s[j]);
            if(((abs(s[i]-s[j])!=32)||(s[i]<65)||s[j]<65)&&(abs(s[i]-s[j])!=0))
                return false;
            i++;
            j--;
        }
        
        return true;
    }
};
