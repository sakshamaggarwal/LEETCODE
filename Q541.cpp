class Solution {
public:
    string reverseStr(string s, int k) {
        
        int n=s.length();
        int j,a,p;
        if(k==0)
            return "";
        for(int i=0;i<n-1;i+=k*2)
        {
            j=i; 
            a=j+k-1;
            if(a>=n)
            {
                a=n-1;
            }
            while(j<a)
            {
                swap(s[j],s[a]);
                j++;
                a--;
            }
        }
        return s;
    }
};
