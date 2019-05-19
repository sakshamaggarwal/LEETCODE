class Solution {
public:
    bool buddyStrings(string A, string B) {
        
        int a=A.size(),b=B.size();
        if(a!=b)
            return false;
        
        int i=0,k=1,c1=0,c2=0;
        
        for(i=0;i<a;i++)
        {
            if(A[i]!=B[i])
            {
                if(k==1)
                    c1=i;
                else if(k==2)
                    c2=i;
                else
                    return false;
                k++;
            }
        }
        
        int arr=unordered_set<char>(A.begin(),A.end()).size();         // to check if all elements are unique or not **
        
        if((k==1)&&(arr==B.length()))
            return false;
        else if(k==2)
            return true;
        else if(k==3)
        {
            swap(A[c1],A[c2]);
            if(A==B)
                return true;
            return false;
        }
        return true;
    }
};
