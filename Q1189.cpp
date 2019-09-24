class Solution {
public:
    int maxNumberOfBalloons(string text) {
        
        int n=text.size();
        string s="balloon";
        map<char,int> m;
        
        for(int i=0;i<n;i++)
        {
            m[text[i]]++;
        }
        int mini=INT_MAX;
        for(int i=0;i<7;i++)
        {
            mini=min(mini,m[s[i]]);
            if(s[i]=='l'||s[i]=='o')
                m[s[i]]/=2;
        }
        return mini;
    }
};

//  Without anything like map..

// class Solution {
// public:
//     int maxNumberOfBalloons(string text) {
//         int b = 0;
//         int a = 0;
//         int l = 0;
//         int o = 0;
//         int n = 0;
        
//         for(auto c : text)
//             switch(c)
//             {
//                 case 'b':
//                     b++;
//                     break;
//                 case 'a':
//                     a++;
//                     break;
//                 case 'l':
//                     l++;
//                     break;
//                 case 'o':
//                     o++;
//                     break;
//                 case 'n':
//                     n++;
//             }
//         return min(b, min(a, min(l/2, min(o/2, n)))); 
//     }
// };
