class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        
        vector<int> a,b;
        int n=A.size();
        
        for(int i=0;i<n;i++)
        {
            if(A[i]%2==0)
                a.push_back(A[i]);
            else
                b.push_back(A[i]);
        }
        a.insert(a.end(),b.begin(),b.end());
        return a;
    }
};
