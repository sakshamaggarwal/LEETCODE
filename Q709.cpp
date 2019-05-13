class Solution {
public:
    string toLowerCase(string str) {
        
        int n=str.length();
        
        for(int i=0;i<n;i++)
        {
            if((str[i]<93)&&(str[i]>64))
                str[i]=str[i]+32;
        }
        return str;
    }
};
