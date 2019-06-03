class Solution {
public:
    void wiggleSort(vector<int>& nums) {
    
        int n=nums.size();
        vector<int> a(nums);
        sort(a.begin(),a.end());
        int i,j,l;
        
        if(n%2==0)
            l=n/2-1;
        else
            l=n/2;
        for(i=0,j=n-1;i<n;i++)
        {
            if(i%2==0)
            {
                nums[i]=a[l];
                l-=1;
            }
            else
            {
                nums[i]=a[j];
                j-=1;
            }
        }
        
    }
};
