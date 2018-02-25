class Solution {
public:
    int reverse(int x) {
         if(x>INT_MAX || x<INT_MIN)
               return 0;
        double rev=0;
        while(x)
        {
            rev=rev*10+x%10;
            x=x/10;
        }
        if(rev>INT_MAX || rev<INT_MIN)
               return 0;
        return rev;
    }
};
