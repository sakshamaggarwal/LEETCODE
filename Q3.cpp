//Both Works...
//IDEA :

// class Solution {
// public:
//     int lengthOfLongestSubstring(string s) {
//         unordered_map<char, int>m;
//         int maxlen = 0;
//         for(int i = 0, j = 0; j < s.size(); j++){
//             m[s[j]]++;
//             while(m[s[j]] > 1) m[s[i++]]--;
//             maxlen = max(maxlen, j - i + 1);
//         }
//         return maxlen;
//     }
// };

//DOne : 

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        int n=s.length();
        map<char,int> m;
        int i,k=0,j,maxi=0;
        
        for(i=0,j=0;i<n;i++)
        {
            m[s[i]]++;
            if(m[s[i]] > 1)
            {
                while(m[s[i]]>1)
                {
                    k--;
                    m[s[j++]]--;
                }
                k++;
            }
            else
                k++;
         maxi=max(k,maxi);
        }
        return maxi;
    }
};
