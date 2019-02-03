class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size();
        int k=1;
        if(n==1)
            {
                if(digits[0]==9)
                {
                    digits[0]=1;
                    digits.insert(digits.end(),0);
                }
                else
                    digits[0]+=1;
                
           }
        else if(digits[n-1]==9)
            {
            while(digits[n-k]==9)
            {
                digits[n-k]=0;
                k++;
            }
            if(k>n)
                digits.insert(digits.begin(),1);
            else
                digits[n-k]+=1;
        }
        else
            digits[n-1]+=1;
        return digits;
    }
};
