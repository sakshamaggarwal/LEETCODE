class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n<=0)
            return false;
        if(1162261467%n==0)
            return true;
        return false;
       }
};     
//         float k=n;
//         if(n<=0)
//             return false;
//         for(int i=0;i<n/3+1||k==0;i++)
//         {
//             if(k==1)
//             {
//                 k=0;
//                 break;
//             }
//               k/=3;
//             //cout<<k;
            
//         }
//         //cout<<k;
//         if(k!=0)
//             return false;
//         return true;
