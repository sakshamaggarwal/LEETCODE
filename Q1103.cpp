class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
        
        vector<int> nums(num_people,0);
        
        for(int i=0;candies>0;candies-=++i)
        {
            nums[i%num_people]+=min(i+1,candies);
        }
        return nums;
    }
};
