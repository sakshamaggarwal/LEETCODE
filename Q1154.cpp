class Solution {
public:
    int dayOfYear(string date) {
        
        int y=(date[0]-'0')*1000+(date[1]-'0')*100+(date[2]-'0')*10+(date[3]-'0');
        int m=(date[5]-'0')*10+(date[6]-'0');
        int d=(date[8]-'0')*10+(date[9]-'0');
        
        if(m>2&&((y%4==0&&y%100!=0)||y%400==0))
            d++;
        int mon[12]={0,31,59,90,120,151,181,212,243,273,304,334};
        d+=mon[m-1];
        
        return d;
    }
};
