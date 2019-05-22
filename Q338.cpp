class Solution {
public:
    vector<int> countBits(int num) {
        
        vector<int> a;
        int k=0,p=0,j=0;
        a.push_back(0);
        
        for(int i=1;i<=num;i++)
        {
            k=0;
            j=i;
            while(i>0)
            {
                p=i%2;
                i/=2;
                    if(p==1)
                        k++;                    
            }
            i=j;
            a.push_back(k);
        }
        return a;
    }
};
