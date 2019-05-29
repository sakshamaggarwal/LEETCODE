class Solution {
public:
    int reachNumber(int target) {
        
        target=abs(target);
        long int i=1,sum=0;
        while(sum<target)
        {
            sum+=i;
            i++;
        }
        if(sum==target)
            return i-1;
        int k=sum-target;
        if(k%2==0)
        {
            return i-1;
        }
        if((k+i)%2==0)
            return i;
        return i+1;

    }
};
