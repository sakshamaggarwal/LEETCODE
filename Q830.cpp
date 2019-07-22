class Solution {
public:
    vector<vector<int>> largeGroupPositions(string S) {
        
        int n=S.size();
        int j=0,k=0;
        vector<vector<int>> num;
        
        for(int i=1;i<n;i++)
        {
            vector<int> v;
            j=i;
            k=0;
            while((i<n)&&(S[i-1]==S[i]))
            {
                k++;
                i++;
            }
            if(k>=2)
            {
                v.push_back(j-1);
                v.push_back(i-1);
                num.push_back(v);
            }
        }
        return num;
    }
};
