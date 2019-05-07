class Solution {
public:
    int hammingDistance(int x, int y) {
        
        vector<int> a,b;
        while(x>0)
        {
            a.push_back(x%2);
            x/=2;
        }
        while(y>0)
        {
            b.push_back(y%2);
            y/=2;
        }
        int n1=a.size(), n2=b.size();        
        int k=0,i=0;
        
        while((i<n1)&&(i<n2))
        {
            if(a[i]!=b[i])
                k++;
            i++;
        }
        while(i<n1)
        {
            if(a[i]==1)
                k++;
            i++;
        }
        while(i<n2)
        {
            if(b[i]==1)
                k++;
            i++;
        }
        return k;
        
    }
};
