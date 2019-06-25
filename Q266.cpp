class Solution {
public:
    bool canPermutePalindrome(string s) {
        
        int n=s.size();
        map<char,int> m;
        for(int i=0;i<n;i++)
        {
            m[s[i]]++;
        }
        
        int k=0;
        for(auto i: m)
        {
            if(i.second%2 !=0)
                k++;
            if(k>1)
                return false;
        }
        return true;
    }
};
