class Solution {
public:
    int findNthDigit(int n) {
        
        // int s=0,k=n;
        // if(n<10)
        //     return n;
        // while(k)
        // {
        //     k/=10;
        //     s++;
        // } 
        
        int long digit=1,k=9;            //Assuming 250
        while(n-k*digit>0)
        {
            n-=k*digit;             //61
            k*=10;
            digit++;
        }
        
        int num=1;
        k=n/digit;                  //20
        //if(k==0)
            
        for(int i=1;i<digit;i++)
        {
            num=num*10;             //120
            
        }
        num+=k;
        
        int pos=n%digit;            //1,2,3
        if(pos==0)
        {
            pos=digit;              //0->3
            num--;        
        }
        for(int i=pos;i<digit;i++)
        {
            num/=10;
        }
        return num%10;
        
    }
};
