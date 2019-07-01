class Solution {
public:
    void helper(vector<vector<int>> & image, int color, int sr,int sc, int newColor)
    {
        if(image[sr][sc]==color)
            image[sr][sc]=newColor;
        else
            return;
        if(sr>=1)
            helper(image,color,sr-1,sc,newColor);
        if(sr+1<image.size())
            helper(image,color,sr+1,sc,newColor);
        if(sc+1<image[0].size())
            helper(image,color,sr,sc+1,newColor);
        if(sc>=1)
            helper(image,color,sr,sc-1,newColor);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        
        int color=image[sr][sc];
        if(color==newColor)
            return image;
        helper(image,color,sr,sc,newColor);
        return image;
    }
};
