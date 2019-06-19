class Solution {
public:
    int countPrimes(int n) {
        
        vector<bool> a(n,true);
        long int i,j;
        if(n<=1)
            return 0;
        
        for(i=2;i<n;i++)                             // +2 :: a[0]=false,a[1]=false;
        {
            if(a[i])
            {
                for(j=i*i;j<n;j+=i)
                    a[j]=false;
            }
        }
        return count(a.begin()+2,a.end(),true);         // +2 :: a[0]=false,a[1]=false;
    }
};

//  TLE : 
// class Solution {
// public:
//     long int countPrimes(long int n) {
        
//         if(n<=2)
//             return 0;
        
//         long int num=0;
//         for(long int i=2;i<n;i++)
//         {
//             long int p=0;
            
//             for(long int j=2;j*j<=i;++j)        //***********
//             {
//                 if(i%j==0)
//                 {
//                     p=1;
//                     break;        //***
//                 }                
//             }            
//             if(p!=1)
//                 num++;
//         }
//         return num;
//     }
// };
