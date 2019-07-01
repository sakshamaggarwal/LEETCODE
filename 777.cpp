class Solution {
public:
    bool canTransform(string start, string end) {
        
        int a=start.size(),b=end.size();
        int a1=0,a2=0;
        if((a==1)&&(b==1))
            return start==end;
        
        for(int i=0;i<a;i++)
        {
            if(start[i]!='X')
                a1++;
            if(end[i]!='X')
                a2++;
        }
        if(a1!=a2)
            return false;
        
        for(int i=0,j=0;i<a;)
        {
            if(start[i]=='X')
            {
                i++;
                continue;
            }
            if(end[j]=='X')
            {
                j++;
                continue;
            }
            
            if(start[i]=='L')
            {
                while(end[j]!='L'&&j<a)
                    j++;
                if(i<j)
                    return false;
            }  
            else if(start[i]=='R')
             {
                while(end[j]!='R'&&j<a)
                    j++;
                if(i>j)
                    return false;
            }
            i++;
            j++;
        }
        return true;
    }
};
