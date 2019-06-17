class Solution {
public:
    int helper(int a,int b)
    {
        return a*a+b*b;
    }
    vector<vector<int>> kClosest(vector<vector<int>>& points, int K) {
        
        int n=points.size();
        vector<int> nums(n+1,INT_MAX);
        
        for(int i=0;i<n;i++)
        {
            nums[i]=helper(points[i][0],points[i][1]);
        }
        sort(nums.begin(),nums.end());
        int p=nums[K];
        vector<vector<int>> a;
        
        for(int i=0;i<n;i++)
        {
            if(helper(points[i][0],points[i][1])<p)
                a.push_back(points[i]);
        }
        return a;
        
    }
};
//  USING MAPS
// class Solution {
// public:
//     vector<vector<int>> kClosest(vector<vector<int>>& points, int K) {
        
//         multimap<int,int> m;
//         int n=points.size();
//         for(int i=0;i<n;i++)
//         {
//             m.insert({points[i][1]*points[i][1]+points[i][0]*points[i][0],i});
//         }
        
//         vector<vector<int>> a;
        
//         for(auto i=m.begin(); K>0; i++,K--)
//         {
//             a.push_back(points[i->second]);
//         }
//         return a;
//     }
// };

