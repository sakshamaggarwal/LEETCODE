class Solution {
public:
    string removeKdigits(string num, int k) {
        
        int n=num.size();
        if(n==k)
            return "0";
        string s="";
        int i;
        for(i=0;i<n;i++)
        {
            while(s.size()&&s.back()>num[i]&&k&&i<n)
            {
                s.pop_back();
                k--;
            }
            if(s.size()||num[i]!='0')
                s.push_back(num[i]);
        }
        while(k--)
            s.pop_back();
        if(s.size())
            return s;
        return "0";
    }
};
