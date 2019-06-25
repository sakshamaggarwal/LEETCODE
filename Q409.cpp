class Solution {
public:
    int longestPalindrome(string s) {
        
        int n=s.size();
        map<char,int> m;
        
        for(int i=0;i<n;i++)
            m[s[i]]++;
        
        int k=0,a=1,t=0,l=0;
        for(auto i : m)
        {
            if(i.second%2==0)
            {
                k+=i.second;
            }
            else
            {
                a=0;
                l+=2*(i.second/2);
            }
        }
        if(a==0)
            l++;
        return k+l;
    }
};
