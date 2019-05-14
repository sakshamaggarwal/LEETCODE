class Solution {
public:
    char findTheDifference(string s, string t) {
        
        int a=0,b=0;
        
        for(int i=0;i<s.size();i++)
        {
            a+=s[i];
        }
        
        for(int i=0;i<t.size();i++)
        {
            b+=t[i];
        }
        return b-a;      
           }
};
        //too big : 
        
//         long int size=sizeof(s),i;
        
//         sort(s.begin(),s.end());
//         sort(t.begin(),t.end());
//         s[size]='a';
//         for(i=0;i<size;i++)
//         {
//             cout<<s[i]<<t[i];
//             if(s[i]!=t[i])
//             {
//                 return t[i];
//             }
//         }
//         return t[i-1];
 
