class Solution {
public:
    string dayOfTheWeek(int day, int month, int year) {
        
        vector<string> s={"Monday", "Tuesday", "Wednesday", "Thursday","Friday","Saturday","Sunday"};
  
        day+=3;                         // 1971 jan 1 = friday..
        int y=1971;
        if(month>2&&((year%4==0&&year%100!=0)||(year%400==0)))
            day++;
        while(y<year)
        {
            if((y%4==0&&y%100!=0)||(y%400==0))
                day++;
            day+=365;
            y++;
        }
        int m[12]={0,31,59,90,120,151,181,212,243,273,304,334};
        day+=m[month-1];
        return s[day%7];
    }
};
