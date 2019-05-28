class Solution {
public:
    int binaryGap(int N) {
        
        int a=0,b=0,o=0,p=0,num=0,k=0;
        
        while(N>0)
        {
            p=0;
            a=N%2;
            if(a==1)
            {
                o=0;
                while(N>0)
                {
                    k++;
                    N/=2;
                    a=N%2;
                    p=1;
                    if(a==1)
                    {
                        o=1;
                        break;
                    }
                }
            }
            
            if((p==1)&&(o==0))
                k=0;
            if(k>num)
                num=k;
            k=0;
            
            if(p==1)
                continue;
            
            N/=2;
        }
        return num;
    }
};
