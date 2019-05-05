class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() < 2)
            return nums.size();
        int n = nums.size();
        int i = 0, j = 1, cnt = 1, total = 1;
        while(j < n){
            nums[i+1] = nums[j];
            if(nums[i] == nums[j] && cnt <2){ 
                i++;
                cnt ++;
                total++;
            }else if(nums[i] != nums[j]){ 
                cnt = 1;
                total++;
                i++;
            }
            j++;
        }
       
        return total;
    }
};


// --by removing elememt--

// class Solution {
// public:
//     int removeDuplicates(vector<int>& nums) {
        
//         int n=nums.size(),j,k,p;
//         for(int i=0;i<n-2;i++)
//         {
//             if(p==0)
//                 i-=k-2;
//             k=1,p=1;
//             if(nums[i]==nums[i+1])
//             {
//                 j=i;
//             while(nums[i]==nums[i+1])
//             {
//                 k++;
//                 i++;
//                 p=0;
//              if(i==n-1)
//                 {
//                     k++;
//                     break;
//                 }
//             }
//             if(p==0)
//             {
//                 if(k>2)
//                 {
//                  int u=j;
//                     while(j<(i-1))
//                     {
//                         for(int l=j;l<n-1;l++)
//                         {
//                             nums[l]=nums[l+1];
//                         }
//                      n--;
//                      j++;
//                     }
//                 }
//             }
//         }
//         }
//         return n;
//     }
// };
