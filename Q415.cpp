class Solution {
public:
    string addStrings(string num1, string num2) {
        
        int i=num1.length()-1,j=num2.length()-1;
        int carry=0;
        string l="";
        char ch;
        
        while((i>=0)&&(j>=0))
        {
            ch=num1[i]+num2[j]-'0'+carry;
            if(ch>'9')
            {
                carry=1;
                ch=ch-10;
            }
            else
            {
                carry=0;
            }
            l+=ch;
            i--;
            j--;
        };
        
        while(i>=0)
        {
            ch=num1[i]+carry;
            if(ch>'9')
            {
                carry=1;
                ch=ch-10;
            }
            else{
                carry=0;
            }
            l+=ch;
            i--;
        }
        
        while(j>=0)
        {
            ch=num2[j]+carry;
            if(ch>'9')
            {
                carry=1;
                ch=ch-10;
            }
            else{
                carry=0;
            }
            l+=ch;
            j--;
        }
        
        if(carry==1)
            l+="1";
        
        reverse(l.begin(),l.end());
        
        return l;
        
    }
};
