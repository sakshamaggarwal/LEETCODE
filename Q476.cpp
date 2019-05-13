class Solution {
public:
    int findComplement(int num) {
        
        vector<int> n;
        int a,k=0;
        if(num==0)
            return 1;
        while(num>0)
        {
            a=num%2;
            if(a==1)
                n.push_back(0);
            else
                n.push_back(1);
            num/=2;
        }
       
        for(int i=0;i<n.size();i++)
        {
            k+=n[i]*pow(2,i);
        }
        return k;
    }
};
    
