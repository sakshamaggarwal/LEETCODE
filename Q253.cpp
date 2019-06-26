class Solution {
public:
    int minMeetingRooms(vector<vector<int>>& intervals) {
        
        int n=intervals.size();
        map<int,int> m;
        
        for(int i=0;i<n;i++)
        {
            m[intervals[i][0]]++;
            m[intervals[i][1]]--;
        }
        int a=0,b=0;
        for(auto it: m)
        {
            a+=it.second;
            b=max(a,b);
        }
        return b;
    }
};
