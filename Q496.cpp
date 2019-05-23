class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        int a=nums1.size();
        int b=nums2.size();
        int o=0;
        
        for(int i=0;i<a;i++)
        {
            o=0;
            for(int j=0;j<b;j++)
            {
                if(nums1[i]==nums2[j])
                {
                    for(int k=j;k<b;k++)
                    {
                        if(nums2[k]>nums2[j])
                        {
                            nums1[i]=nums2[k];
                            o=1;
                            goto place;
                        }
                    }
                }
            }
            place:
            
            if(o==0)
                nums1[i]=-1;
        }
        return nums1;
    }
};
