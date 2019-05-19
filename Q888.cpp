class Solution {
public:
    
    int sum(vector<int> a)
    {
        int s=0;
        for(int i=0;i<a.size();i++)
            s+=a[i];
        return s;
    }
    vector<int> fairCandySwap(vector<int>& A, vector<int>& B) {
        
        int a=A.size();
        int b=B.size();
        int s1,s2,diff=0;
        vector<int> num;
        
        s1=sum(A);
        s2=sum(B);
        
        diff=abs(s1-s2)/2;
        for(int i=0;i<a;i++)
        {
            for(int j=0;j<b;j++)
            { 
                if(abs(A[i]-B[j])==diff)
                {
                    if((sum(A)-A[i]+B[j])==(sum(B)-B[j]+A[i]))
                    {
                        num.push_back(A[i]);
                        num.push_back(B[j]);                  
                        return num;
                    }
                }
            }
            
        }
        return num;
    }
};
