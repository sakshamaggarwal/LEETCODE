class Solution {
public:
    int sumOfDigits(vector<int>& A) {
        
        sort(A.begin(),A.end());
        int k=0;
        while(A[0]>0)
        {
            k+=A[0]%10;
            A[0]/=10;
        }
        if(k%2==0)
            return 1;
        return 0;
    }
};
