class Solution {
public:
    string reverseWords(string s) {
        
        if(s.size()<=0)
            return s;
        
        vector<string> p;
        string a="",c;
        istringstream b(s);
        
        while(b>>c)
        {
            p.push_back(c);
        }
        reverse(p.begin(),p.end());
        
        int n=p.size(),i=0;
        if(n==0)
            return a;

        while(n>i+1)
        {
            a+=p[i];
            a+=' ';
            i++;
        }
        
        return a+p[n-1];
    }
};
