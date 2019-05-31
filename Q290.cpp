class Solution {
public:
    bool wordPattern(string pattern, string str) {
        
        int n=pattern.size();
        istringstream s(str);
        map<char,int> m1;
        map<string,int>m2;
        string ch;
        
        for(int i=0;i<n;i++)
        {
            if(s>>ch)
            {
                if(m1[pattern[i]]!=m2[ch])
                    return false;
                m1[pattern[i]]=m2[ch]=i+1;
            }
            else
                return false;
        }
        if(s>>ch)
            return false;
        return true;
    }
};
