class Solution {
public:
    void reverseWords(vector<char>& s) {
        
        int n=s.size(),i=0,j=0;
        reverse(s.begin(),s.end());
        
        for(i=0;i<n;i=j+1)
        {
            for(j=i;j<n&&s[j]!=' ';j++);
            
            reverse(s.begin()+i,s.begin()+j);
        }
    }
};

// class Solution {
// public:
//     void reverseWords(vector<char>& s) {
        
//         reverse(s.begin(),s.end());
        
//         int n=s.size(),i=0,j=0;
        
//         while(i<n)
//         {
//              if(s[i]==' ')
//              {
//                  i++;
//                  continue;
//              }
//             j=i;
//             while((s[j]!=' ')&&(j<n-1))
//             {
//                 j++;
//             }
//             if(j==n-1)
//                 j++;
            
//             reverse(s.begin()+i,s.begin()+j);
//             i=j+1;
//         }
//     }
// };
