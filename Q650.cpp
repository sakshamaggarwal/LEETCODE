class Solution {
public:
    int minSteps(int n) {
     
        int d=2,sum=0;
        while(n>1)
        {
            while(n%d==0)
            {
                sum+=d;
                n/=d;
            }
            d++;
        }
        return sum;
    }
};
