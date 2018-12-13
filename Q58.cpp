class Solution {
public:
    int lengthOfLastWord(string s) {
        
        int i,a=0,b=0;
        
        for(i=0;s[i]!='\0';i++)
        {
            if(s[i]==' ')
                a++;
            if(s[i-1]==' '&& s[i]!=' ')
            {
                b=i;
                a=0;
            }
        }
        return i-b-a;
    }
};



// Alterante solution

// class Solution {
// public:
//     int lengthOfLastWord(string s) {
//         int n=s.length()-1,k=0;
     
//         while(s[n]==' ')
//             n--;
        
//         while((n>=0) && (s[n]!=' '))
//         {
//             k++;
            
//             n--;
//         }
        
//         return k;
//     }
// };
