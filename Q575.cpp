class Solution {
public:
    int distributeCandies(vector<int>& candies) {
        
        int n=candies.size();
        int k=1;
        sort(candies.begin(),candies.end());
        
        for(int i=0;i<n-1;i++)
        {
            if(candies[i]!=candies[i+1])
                k++;
        }
        
        if(n/2>=k)
            return k;
        else
            return n/2;
        
        return k;
    }
};
