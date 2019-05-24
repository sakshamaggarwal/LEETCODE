class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        
        int n=bills.size();
        int a=0,b=0;
        
        for(int i=0;i<n;i++)
        {
            if(bills[i]==5)
                a++;
            else if(bills[i]==10)
            {
                if(a==0)
                    return false;
                else
                {
                    a--;
                    b++;
                }
            }
            else if(bills[i]==20)
            {
                if(a==0)
                    return false;
                if((b==0)&&(a>2))
                {
                    a=a-3;
                    continue;
                }
                else if((b==0)&&(a<3))
                    return false;
                else
                {
                    b--;
                    a--;
                }
            }
        }
        return true;
    }
};
