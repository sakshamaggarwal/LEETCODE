class Solution {
public:
    vector<int> shortestToChar(string S, char C) {
       
        int n=S.size();
        vector <int> num(n,n);
        int pos=n;
        
        for(int i=0;i<n-1;i++)
        {
            if(S[i]==C)
                pos=i;
            num[i]=min(num[i],abs(pos-i));
        }
        for(int i=n-1;i>=0;i--)
        {
            if(S[i]==C)
            {
                pos=i;
            }
            num[i]=min(num[i],abs(pos-i));
        }
        
        return num;
    }
};
