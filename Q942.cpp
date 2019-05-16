class Solution {
public:
    vector<int> diStringMatch(string S) {
        
        int n=S.length();
        int a=0,b=n;
        vector<int> num;
        
        for(int i=0;i<=n;i++)
        {
            if(S[i]=='I')
            {
                num.push_back(a++);
            }
            else
                num.push_back(b--);
        }
        return num;
    }
};
