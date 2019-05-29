class Solution {
public:
    bool rotateString(string A, string B) {
        
        int n1=A.length();
        int n2=B.length();
       
        if(n1!=n2)
            return false;
        if(n1==0)
            return true;
        
        for(int i=0;i<n1;i++)
        {
            if((A.substr(i,n1)+A.substr(0,i))==B)
                return true;
        }
        return false;
    }
};
