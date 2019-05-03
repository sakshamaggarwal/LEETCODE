class Solution {
public:
    vector<int> addToArrayForm(vector<int>& A, int K) {
        
        int n=A.size()-1;
        int p=0,i=0,g=n,carry=0;
        vector<int> sum;
        
        for(int i=0;i<=n;i++)
        {
            p=A[g]+K%10+carry;
            if(p>9)
            {
                carry=1;
                p-=10;
            }
            else
                carry=0;
            
            sum.push_back(p);
            g--;
            K/=10;
        }
         while(K>0)
            {
                p=K%10+carry;
                if(p>9)
                {
                    carry=1;
                    p-=10;
                }
             else
                 carry=0;
             
                sum.push_back(p);
                K/=10;
            }
        
        if(carry==1)
            sum.push_back(1);
        
        reverse(sum.begin(),sum.end());
        return sum;
    }
};
