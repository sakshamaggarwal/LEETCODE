class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size();
        int n2=nums2.size();
        vector<int> a(n1+n2);
        
        int i=0,j=0,k=0;
        while(n1>i)
        {
            a[k]=nums1[i];
            k++;
            i++;
        }
        while(n2>j)
        {
            a[k]=nums2[j];
            k++;
            j++;
        }
        int n=n1+n2;
        sort(a.begin(),a.end());
        double o=a[n/2]+a[n/2-1];
        
        if(n%2==0)
            return o/2;
        
        return a[n/2];
        
    }
};
