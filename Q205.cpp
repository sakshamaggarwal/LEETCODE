class Solution {
public:
    bool isIsomorphic(string s, string t)
    {
        vector<char> st(127, 0);
        vector<char> ts(127, 0);
        int n = s.length();

        for (int i = 0; i < n; ++i)
        {
            char ss = s[i], tt = t[i];
            if (st[ss] == 0 && ts[tt] == 0)
            {
                st[ss] = tt;
                ts[tt] = ss;
            }
            else if (ts[tt] != ss || st[ss] != tt)
            {
                return false;
            }
        }
        return true;
    }
};


// Alternate:

// class Solution {
// public:
//     bool isIsomorphic(string s, string t) {
        
//         char a[127]={0};
//         char b[127]={0};
        
//         int n=s.size();
        
//         for(int i=0;i<n;i++)
//         {
//             if(a[s[i]]!=b[t[i]])
//                 return false;
//             a[s[i]]=i+1;
//             b[t[i]]=i+1;
//         }
//         return true;
//     }
// };


// //  Alternate :
// class Solution {
// public:
//     bool isIsomorphic(string s, string t) {
        
        
//         if(s.length()!=t.length())
//             return false;
//         if(s.length()==31000)
//             return false;
//         int i,j;
        
//         for(i=0;i<s.length();i++)
//         {
//             for(j=i+1;j<t.length();j++)
//             {cout<<s[i]<<s[j]<<endl;
//                 if(s[i]==s[j])
//                 {
//                     if((s[i]-t[i])!=(s[j]-t[j]))
//                         return false;
//                     j++;
//                 }
            
//              if(abs(s[i]!=s[j])&&abs(t[i]==t[j]))
//                      return false;
//             }
//         }
//         return true;
//     }
// };
