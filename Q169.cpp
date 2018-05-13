// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
        
//         int ele=nums[0],count=1;
//         int n=nums.size();
//         for(int i=0;i<n;i++)
//         {
//             if(count=0)
//             {
//                 count++;
//                 ele=nums[i];
//             }
//             else if(nums[i]==ele)
//                 count++;
//             else
//                 count--;
//         }
//         return ele;
//     }
// };
// // This is also good

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int mid=nums.size()/2;
        return nums[mid];
    }
};
