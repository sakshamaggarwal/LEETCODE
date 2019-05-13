class Solution {
public:
    bool isPerfectSquare(int num) {
        
        if((num==1)||(num==4))
            return true;
        long int i;
        for(i=0;i<num/2;i++)
        {
            if(i*i==num)
                return true;
        }
        return false;
    }
};
