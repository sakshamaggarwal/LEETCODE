class Solution {
public:
    vector<int> getRow(int rowIndex) {
        
        vector<int> a;
        long int n=1;
            for(int j=0;j<=rowIndex;j++)
            {
                a.push_back(n);
                n=n*(rowIndex-j)/(j+1);
            }
            return a;
    }
};
