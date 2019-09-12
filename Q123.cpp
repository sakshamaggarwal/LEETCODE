//  Add both from left and right profit and return maximum...

class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int n=prices.size();
        if(n==0)
            return 0;
        vector<int> a(n,0),b(n,0);
        int mi=prices[0];
        int t=0;
        for(int i=1;i<n;i++)
        {
            mi=min(prices[i],mi);
            t=max(t,prices[i]-mi);
            a[i]=t;
        }
        mi=prices[n-1];
        t=0;
        for(int i=n-2;i>=0;i--)
        {
            mi=max(prices[i],mi);
            t=max(t,mi-prices[i]);
            b[i]=t;
        }
        int k=0;
        for(int i=0;i<n;i++)
        {
            k=max(k,b[i]+a[i]);
        }
        return k;
    }
};

//  Other way less complexity...

// class Solution {
// public:
//     int maxProfit(vector<int>& prices) {
        
//         int n=prices.size();
        
//         if(n<=1)
//             return 0;
        
//         int b1=prices[0];
//         int s1=0;
//         int b2=prices[0];
//         int s2=0;
        
//         for(int i=1;i<n;i++)
//         {
//             b1=min(b1,prices[i]);
//             s1=max(s1,prices[i]-b1);
//             b2=min(b2,prices[i]-s1);
//             s2=max(s2,prices[i]-b2);            
//         }
//         return s2;
//     }
// };
