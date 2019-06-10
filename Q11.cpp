class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int j=height.size()-1,i=0,sum=0;
        
        while(i<j)
        {
            sum=max(sum,min(height[i],height[j])*(j-i));
            
            if(height[i]<height[j])
                i++;
            else
                j--;
        }
        return sum;
    }
};


// BRUTE FORCE : TLE
// class Solution {
// public:
//     int maxArea(vector<int>& height) {
        
//         int n=height.size();
//         int area=0;
        
//         for(int i=0;i<n;i++)
//         {
//             for(int j=1;j<n;j++)
//             {
//                 area=max(area,min(height[i],height[j])*(j-i));
//             }
//         }
//         return area;
//     }
// };
