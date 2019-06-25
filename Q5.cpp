class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.size();
        int maxi=0,a=0,j,k;
        for(int i=0;i<n;i++)                // common i pointer in between and k++ j--(k=j=i)
        {
            j=i,k=i;
            while((k<n-1)&&(s[k]==s[k+1]))      //for duplicates
                k++;
            while((j>0)&&(k<n)&&(s[j-1]==s[k+1]))
            {
                j--;
                k++;
            }
            if(maxi<k-j+1)
            {
                a=j;
                maxi=k-j+1;
            }
        }
        return s.substr(a,maxi);
    }
};
