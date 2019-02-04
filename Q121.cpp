class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int profit=0,sum=0;
        int n=prices.size();
        
        for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++)
            {
                if(prices[i]<prices[j])
                    sum=prices[j]-prices[i];
                if(profit<sum)
                    profit=sum;
            }
            //cout<<i<<"="<<profit<<endl;
        }
        return profit;
    }
};
