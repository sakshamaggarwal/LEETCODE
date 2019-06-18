class Solution {
public:
    bool confusingNumber(int N) {
        
        int k=0,a,n=N,sum=0;
        while(n)
        {
            a=n%10;
            if(a==6)
               a=9;
            else if(a==8)
               a=8;
            else if(a==9)
               a=6;
            else if(a==0)
               a=0;
            else if(a==1)
                a=1;
            else
                return false;
            sum=sum*10+a;
            n/=10;
        }
        if(N==sum)
            return false;
        return true;
    }
};

// class Solution {
// public:
//     bool confusingNumber(int N) {
        
//         int k=0,a;
//         while(N)
//         {
//             a=N%10;
//             if((a==6)||(a==8)||(a==9))
//             {
//                 k=1;
//             }
//             else if((a==0)||(a==1));
//             else
//                 return false;
//             N/=10;
//         }
//         if(k==0)
//             return false;
//         return true;
//     }
// };

