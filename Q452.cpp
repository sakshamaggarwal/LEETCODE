class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        
        int n=points.size();
        if(n==0)
            return 0;
        int k=1;
        sort(points.begin(),points.end());
        int p=points[0][1];
        for(int i=0;i<n;i++)
        {
            if(p<points[i][0])
            {
                k++;
                p=points[i][1];
            }
            else if(p>points[i][1])
            {
                p=points[i][1];
            }
        }
        return k;
    }
};
