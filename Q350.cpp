class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        
        int a=nums1.size(),b=nums2.size();
        map<int,int> m;
        vector<int> v;
        
        for(int i=0;i<a;i++)
        {
            m[nums1[i]]++;
        }
        for(int i=0;i<b;i++)
        {
            if(m[nums2[i]]>0)
            {
                v.push_back(nums2[i]);
                m[nums2[i]]--;
            }
        }
        return v;
    }
};

//  USING SORTING 
// class Solution {
// public:
//     vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        
//         int a=nums1.size(),b=nums2.size();
//         sort(nums1.begin(),nums1.end());
//         sort(nums2.begin(),nums2.end());
//         int i=0,j=0;
//         vector<int> v;
        
//         while(i<a&&j<b)
//         {
//             if(nums1[i]==nums2[j])
//             {
//                 v.push_back(nums1[i]);
//                 i++;
//                 j++;
//             }
//             else if(nums1[i]>nums2[j])
//                 j++;
//             else
//                 i++;
//         }
//         return v;
//     }
// };
