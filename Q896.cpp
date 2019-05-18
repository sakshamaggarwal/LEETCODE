class Solution {
public:
    bool isMonotonic(vector<int>& A) {
        
        int n=A.size();
        
        if(n<2)
            return true;
        int j=1,k=0;
        
        for(int i=0;i<n-1;i++)
        {
            if(A[i]>A[i+1])
            {
                while(j<n-1)
                {
                    if(A[j]<A[j+1])
                        return false;
                    j++;
                    k=1;
                }
            }
            else if(A[i]<A[i+1])
            {
                while(j<n-1)
                {
                    if(A[j]>A[j+1])
                        return false;
                    j++;
                    k=1;
                }
            }
            if(k==1)
                return true;
        }
        
        return true;
    }
};
