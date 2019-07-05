class Solution {
public:
    int bulbSwitch(int n) {
        
        int k=0;
        for(int i=1;i*i<=n;i++)
            k++;
        return k;
    }
};
