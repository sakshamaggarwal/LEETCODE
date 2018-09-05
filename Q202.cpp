class Solution {
public:
    bool isHappy(int n) {
        
        if(n==0)
            return false;
        
        int a,t=0;
        int sum=1;
        int k=n;
        int num=1000000000;
        int runtime = log10(num);         // ****To find runtime for a function*******
        //cout<<runtime<<endl;
        
        if(n%num!=0)
        {
        while(sum)
        {
            sum=0;
        while(n>0)
        {
            //cout<<sum<<n<<"SAK"<<endl;
            a=n%10;
            n/=10;
            sum+=a*a;
            //cout<<"AA"<<sum<<n<<a<<endl;
            
         }
            //cout<<sum;
            if(sum==1)
                return true;
            n=sum;
            //cout<<"SUM="<<sum<<endl;
            
            t++;
            if(t>=runtime)
                return false;
        }
        }
        return true;
    }
    
};
