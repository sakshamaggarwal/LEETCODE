class Solution {
public:
    bool judgeSquareSum(int c) {
        
        long int i=0,j=sqrt(c),a,b;
        
        if(c<3)
            return true;
        
        while(i<=j)
        {
            a=i*i;
            b=j*j;
           
            if(a+b==c)
                return true;
            else if(a+b>c)
            {
                j--;
            }
            else if(a+b<c)
            {
                i++;
            }
            else
            {
                i++;
            }
        }
        return false;
    }
};
