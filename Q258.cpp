class Solution {
public:
    int addDigits(int num) {
        int k=num,p=0;
        while(k)
        {
            p=k%10+p;
            k=k/10;
        }
        if(p/10>0)
        {
       
            p=addDigits(p);
        }
        return p;
    }
};
