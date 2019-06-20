class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
        int a=nums1.size(),b=nums2.size();
        vector<int> v;
        map<int,int> m;
        
        for(int i=0;i<a;i++)
        {
            m[nums1[i]]++;
        }
        for(int i=0; i<b; i++)
        {
            if(m[nums2[i]]>0)
            {
                v.push_back(nums2[i]);
                m[nums2[i]]=0;
            }
        }
        return v;
    }
};

//  sorting 
// class Solution {
// public:
//     vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
//         int a=nums1.size(),b=nums2.size();
        
//         sort(nums1.begin(),nums1.end());
//         sort(nums2.begin(),nums2.end());
//         int i=0,j=0;
//         vector<int> v;
        
//         while((a>i)&&(b>j))
//         {
//             if(nums1[i]<nums2[j])
//             {
//                 i++;
//             }
//             else if(nums1[i]>nums2[j])
//             {
//                 j++;
//             }
//             else
//             {
//                 v.push_back(nums1[i]);
//                 i++;
//                 j++;
//             }
//             while((i!=0)&&(i<a)&&(nums1[i]==nums1[i-1]))
//                 i++;
//             while((j!=0)&&(j<b)&&(nums2[j]==nums2[j-1]))
//                 j++;
//         }
//         return v;
//     }
// };
