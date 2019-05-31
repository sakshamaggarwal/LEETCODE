class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        int n=nums.size(),i,a=0,b=0,c=0;
        for(i=0;i<n;i++)
        {
            if(nums[i]==0)
                a++;
            else if(nums[i]==1)
                b++;
            else
                c++;
        }
        i=0;
        while(i<n)
        {
            while((a>0)&&(i<n))
            {
                nums[i]=0;
                i++;
                a--;
            }
            while((b>0)&(i<n))
            {
                nums[i]=1;
                i++;
                b--;
            }
            while((c>0)&&(i<n))
            {
                nums[i]=2;
                i++;
                c--;
            }
        }
    }
};
        // dont use sort
        // can also put all 0s at start and 2s at end by swapping ---------
