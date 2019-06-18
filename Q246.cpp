class Solution {
public:
    bool isStrobogrammatic(string num) {
        
        string a="";
        int i=num.size()-1;
        while(i>=0)
        {
            if(num[i]=='1')
                a+='1';
            else if(num[i]=='6')
                a+='9';
            else if(num[i]=='8')
                a+='8';
            else if(num[i]=='9')
                a+='6';
            else if(num[i]=='0')
                a+='0';
            else
                return false;
            i--;
        }
        if(a==num)
            return true;
        return false;
    }
};
