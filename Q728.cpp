class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        
        vector<int> a;
        int k=0,o=0,p=0;
        
        for(int i=left;i<=right;i++)
        {
            k=i;
            o=0;
            while(k>0)
            {
                p=k%10;
                if(p==0)
                {
                    o=0;
                    break;
                }
                if(i%p==0)
                    o=1;
                else
                {
                    o=0;
                    break;
                }
                k/=10;
            }
            if(o==1)
            {
                a.push_back(i);
            }
        }
        return a;
    }
};
