class Solution {
public:
    long int trailingZeroes(long int n) {
        
        long int i,k=0;
        for(i=5;i<=n;i*=5)
        {
            k+=n/i;
            
        }
       return k;
    }
};

// Not--
 // int k=1,a=0,l=-1;
        // while(n)
        // {
        //     k*=n;
        //     n--;
        // }
        // while(a==0)
        // {
        //     a=k%10;
        //     k/=10;
        //     l++;
        // }
