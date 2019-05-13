class Solution {
public:
    int mySqrt(int x) {
        
        long int i=0,k;
        if(x==2)
            return 1;
        while(i<x)
        {
            k=i*i;
            if(k==x)
                return i;
            else if(k>x)
                return i-1;
            else if(k<x)
                i++;
            else
                i++;
        }
        return i;
    }
};
