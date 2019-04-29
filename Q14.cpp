class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        int n= strs.size(),k,j,q=0,p=0;
        string a,b;
        if(n==1)
            return strs[0];
        else if(n==0)
            return "";
            
        for(int i=0;i<n-1;i++)
        {
            a= strs[i];
            b= strs[i+1];
            
            k=0,j=0;
            
            if(a==b)
            {
                q=a.size();
                if(i==0)
                    p=q;
                goto equal;
            }
                while(a[j]==b[j])
                {
                    k++;
                    j++;
                }
                p=k;
            equal:
                if(i==0)
                    q=p;
           
                if(q>p)
                    q=p;            
       }
        
        if(q==0)
            return "";
        else 
            return a.substr(0,q);
    }
};
