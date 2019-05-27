class Solution {
public:
    string reverseWords(string s) {
        
        int n=s.length();
        int j;
        
        for(int i=0;i<n;i++)
        {
            j=i;
            while((s[i]!=' ')&&(i<n))
            {
                i++;
            }
            reverse(s.begin()+j,s.begin()+i);
        }
            
        return s;
    }
};
