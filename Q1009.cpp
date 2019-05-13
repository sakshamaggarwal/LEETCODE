class Solution {
public:
    int bitwiseComplement(int N) {
        
        vector<int> num;
        int a,k=0;
        if(N==0)
            return 1;
        while(N>0)
        {
            a=N%2;
            if(a==1)
                num.push_back(0);
            else
                num.push_back(1);
            N/=2;
        }
       
        for(int i=0;i<num.size();i++)
        {
            k+=num[i]*pow(2,i);
        }
        return k;
    }
};
