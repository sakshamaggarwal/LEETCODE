class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        
        int n=bits.size();
        
        if((n==1)&&(bits[0]==0))
            return true;
        
        if(bits[n-1]!=0)
            return false;
        
        if((n==2)&&(bits[0]==1))
           return false;
            
        for(int i=0;i<n;i++)
        {
            while((bits[i]==0)&&(i<n-1))
            {
                i++;
            }
            while((bits[i]==1)&&(i<n-1))
            {
                if((bits[i]==1)&&(i+1>=n-1))
                    return false;
                
                i+=2;
            }
        }
        return true;;
    }
};


// for alternate first and second character : 
// class Solution {
// public:
//     bool isOneBitCharacter(vector<int>& bits) {
        
//         int n=bits.size();
        
//         if((n==1)&&(bits[0]==0))
//             return true;
            
//         if(((n%5==0)&&(n%2!=0))||(n<3))
//             return false;
        
//         if(bits[n-1]!=0)
//             return false;
//         int k=0;
//         for(int i=0;i<n;i++)
//         {
//             if(n%2==0)
//             {
//                 if((bits[i]==1)&&(k!=1))
//                     return false;
//                 // else if((bits[i]==0)&&(bits[i+1]==0)&&(k!=1))
//                 //     return false;
//                 else if((bits[i]==0)&&(k!=1))
//                 {
//                     k=1;
//                     continue;
//                 }
//                 if(k==1)
//                 {
//                     i++;
//                     k=0;
//                 }                
//             }
            
//             if(n%2!=0)
//             {
//                 if((bits[i]==0)&&(k!=1))
//                     return false;
//                 else if((bits[i]==1)&&(k!=1))
//                 {
//                     k=1;
//                     i++;
//                     continue;
//                 }
//                 if((k==1)&&(bits[i]!=0))
//                 {
//                     return false;
//                 }                
//                 else
//                 {
//                     k=0;
//                     return true;
//                 }
//             }
            
//         }
//         return false;
//     }
// };
