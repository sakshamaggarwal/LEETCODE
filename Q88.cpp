class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for(int i=m;n>0;i++)
        {
            nums1[i]=nums2[n-1];
            n--;
        }
        sort(nums1.begin(),nums1.end());
    }
};

// or get full size last=m+n-1 and insert in descending order.
