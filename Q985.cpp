class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& A, vector<vector<int>>& queries) {
        
        int a=A.size();
        int n=queries.size(),p=0,q=0,sum=0;
        vector<int> arr;
        
        for(int j=0;j<a;j++)
        {
            if(A[j]%2==0)
                sum+=A[j];
        }
        int k=sum,o=0;
        for(int i=0;i<n;i++)
        {
            p=queries[i][0];
            q=queries[i][1];
            o=p+A[q];
            if((o%2==0)&&(A[q]%2!=0))
                {
                    sum+=o;
                }
            else if((o%2!=0)&&(A[q]%2==0))
               {
                   sum-=A[q];
                }
            else if((o%2==0)&&(A[q]%2==0))
                sum+=o-A[q];
            A[q]=o;
            arr.push_back(sum);
        }        
        return arr;
    }
};
