class Solution {
public:
    int climbStairs(int n) {
       
       if(n==1)
           return 1;
        int first=1;
        int second=2;
        for(int i=3;i<=n;i++)
        {
            int third=second +first;
            first=second;
            second=third;
        }
    return second;
    }
    };
    
// //     int steps(int i,int n)
// //     {
// //         if(i==n)
// //             return 1;
// //         if(i>n)
// //             return 0;
// //         return steps(i+1,n) + steps(i+2,n);
// //     }
// //};
