//  First
class Solution {
public:
    int arrangeCoins(int n) {
        int long mid=1,high =n,low=1,pos=0,num;
        while(low<=high)
        {
            mid=(low+high)/2;
            num=mid*(mid+1)/2;
            if(num==n)
                return mid;
            else if(num>n)
                high=mid-1;
            else 
            {
                low=mid+1;
                pos=mid;
            }
        }
           return pos;
    }
};

//    Second ::
// class Solution {
// public:
//     int arrangeCoins(int n) {
//         int i=0;
//         while(n>=i)
//         {
//             n-=i;
//             i++;
//         }
//         return i-1;
//     }
// };


//     Third ::
// class Solution {
// public:
//     int arrangeCoins(int n) {
//         int a=1,k=0,num=n,i=0;
//         if(n>INT_MAX)
//             return n;
//         while(n!=0)
//         {
//             for(i=1;i<=num;i++)
//             {
//                 for(int j=0;j<i;j++)
//                 {
//                     k++;
//                 }
//                 if(k==num)
//                 {
//                     //cout<<"!";
//                     return i;
//                 }
//                 else if(k>num)
//                 {
//                     //cout<<"@";
//                     return i-1;
//                 }
                    
//             }
//         }
//             // cout<<"#";
//             return i;
//     }
// };
