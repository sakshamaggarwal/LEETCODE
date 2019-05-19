class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        int n=nums.size();
        int i=0,j=n-1,mid=0;
        
        if(n==1)
            if(nums[0]==target)
                return 0;
            else
                return -1;
        
        while(i<j)
        {
            mid=(i+j)/2;
            
            if(nums[mid]==target)
                return mid;
            if(nums[i]==target)
                return i;
            if(nums[j]==target)
                return j;
            if((nums[mid]>target)&&(nums[j]<target))
            {
                j=mid-1;
                continue;
            }
            else if((nums[mid]<target)&&(nums[j]>target))
            {
                i=mid+1;
                continue;
            }
            i++,j--;
        }
        return -1;
    }
};




// time complexity o(n) but correct

//     class Solution {
//     public:
//         int search(vector<int>& nums, int target) {

//             int n=nums.size()
//             if(n==0)
//                 return -1;

//             for(int i=0;i<n;i++)
//             {
//                 if(nums[i]==target)
//                     return i;
//             }
//             return -1;
//         }
//     };
