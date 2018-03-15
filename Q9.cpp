class Solution {
public:
    bool isPalindrome(int x) {
        
        int k=x;
        if(x<0)
            return false;
        int p=0,num=0;
        while(x)
        {
            num=x%10+num*10;
            x=x/10;
            p+=1;
        }
        if(k==num||p==1)
            return true;
        return false;
    }
};
