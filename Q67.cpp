class Solution {
public:
    string addBinary(string a, string b) {
        
        string c="";
      //  c='0';
        int x,y,k=0,pos=0;
        x=a.size();
        y=b.size();
        
        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());
        
        if(x>y)
        {
            while(x>y)
            {
                b+='0';
                y++;
            }
        }
        else if(y>x)
        {
            while(y>x)
            {
                a+='0';
                x++;
            }
        }
            
        
        while(x>pos||y>pos)
        {
                if(a[pos]=='1'&&b[pos]=='1')
                {
                    if(k==0)
                        c+='0';
                    else
                        c+='1';
                    k=1;
                }
                else if(a[pos]=='1'&&b[pos]=='0')
                {
                    if(k==1)
                    {
                        c+='0';
                        k=1;
                    }
                    else
                        c+='1';
                }
                else if(a[pos]=='0'&&b[pos]=='1')
                {
                    if(k==1)
                    {
                        c+='0';
                        k=1;
                    }
                    else
                        c+='1';
                }
                else
                {
                    if(k==0)
                        c+='0';
                    else
                    {
                        c+='1';
                        k=0;
                    }
                    
                }
           pos++;
            
            cout<<c<<endl;
            
        }
        if(k==1)
                c+='1';
        reverse(c.begin(),c.end());
        return c;
    }
};
