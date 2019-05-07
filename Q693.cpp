class Solution {
public:
    bool hasAlternatingBits(int n) {
        
        vector<int> a;
        int c=2,p;
        while(n>0)
        {
            p=c;
            c=n%2;
            a.push_back(c);
            n/=2;
            if(p==c)
                return false;
        }
        return true;
    }
};
