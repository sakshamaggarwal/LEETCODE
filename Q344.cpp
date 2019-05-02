class Solution {
public:
    void reverseString(vector<char>& s) {
        
        int n=s.size(),i=0;
        if(n==1)
            return;
        if(n==0)
            return;
        if(n==2)
        {
            swap(s[0],s[1]);
            return ;
        }
        
        int k=n-1;
        
       while(i<k)
       {
           swap(s[i],s[k]);
           i++;
           k--;
       }
    }
};
