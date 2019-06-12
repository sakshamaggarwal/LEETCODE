class Solution {
public:
    bool canAttendMeetings(vector<vector<int>>& intervals) {
        
        int n=intervals.size();
        sort(intervals.begin(),intervals.end());
        for(int i=0;i<n-1;i++)
        {
            if(intervals[i][1]>intervals[i+1][0])
                return false;
        }
        return true;
    }
};

    // Brute force TLE by little...
// class Solution {
// public:
//     bool check(vector<int> a,vector<int> b)
//     {
//         return (((a[0]>=b[0])&&(a[0]<b[1]))||((b[0]>=a[0])&&(b[0]<a[1])));
//     }
//     bool canAttendMeetings(vector<vector<int>>& intervals) {
        
//         int n=intervals.size();
//         for(int i=0;i<n;i++)
//         {
//             for(int j=i+1;j<n;j++)
//             {
//                 if(check(intervals[i],intervals[j]))
//                     return false;
//             }
//         }
//         return true;
//     }
// };
