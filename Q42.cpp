    // BRUTE FORCE METHOD :     DYNAMIC METHOD ALSO GOOD...MAKE 2 ARRAYS R[] AND L[]

class Solution {
public:
    int trap(vector<int>& height) {
        
        int n=height.size();
        int sum=0,maxl,maxr;
        
        for(int i=1;i<n-1;i++)
        {
            maxl=0,maxr=0;
            
            for(int j=i;j>=0;j--)
            {
                maxl=max(height[j],maxl);
            }
            for(int k=i;k<n;k++)
            {
                maxr=max(height[k],maxr);
            }
            sum+=min(maxr,maxl)-height[i];
        }
        return sum;
    }
};
