class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        
        vector<vector<int>> v(n,vector<int>(n,0));
        int a=n,b=n,k,p=1,num=n*n,i=0,j=0;
        
        while(i<a&&j<b)
        {
            for(k=j;k<b;k++)
            {
                v[i][k]=p++;
            }
            i++;
            for(k=i;k<a;k++)
            {
                v[k][b-1]=p++;
            }
            b--;
            if(i<a)
            {
                for(k=b-1;k>=j;k--)
                {
                    v[a-1][k]=p++;
                }
            }
            a--;
            if(j<b)
            {
                for(k=a-1;k>=i;k--)
                {
                    v[k][j]=p++;
                }
            }
            j++;
        }
        return v;
    }
};
