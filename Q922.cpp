class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& A) {
        
        int n=A.size();
        
        for(int i=0,j=1;i<n;)
        {
            if(A[i]%2==0)
            {
                i+=2;
            }
            else if(A[j]%2==1)
            {
                j+=2;
            }
            else
            {
                swap(A[i],A[j]);
                i+=2;
                j+=2;
            }
        }
        return A;
    }
};
