class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        
        int p=flowerbed.size();
        if(n==0)
            return true;
        
        if(p<2)
        {
            if((flowerbed[0]==0)&&(n<=1))
                return true;
        }
        if((p==2)&&(n<=1))
        {
            if((flowerbed[0]==0)&&(flowerbed[1]==0))
                return true;
            else
               return false;
        } 
        int k=0;
        for(int i=0;i<p-1;i++)
        {
            if(((i==0)||(flowerbed[i-1]!=1)||(i+1==p-1))&&((flowerbed[i+1]!=1))&&(flowerbed[i]!=1))
            {
                k++;
                flowerbed[i]=1;
            }
        }
        if(k>=n)
            return true;
        return false;
    }
};
