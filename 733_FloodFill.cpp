class Solution {
public:
    void rush_flood(vector<vector<int>>& image, int sr, int sc, int color, int newColor)
    {
        if(color == image[sr][sc])
        {
            image[sr][sc] = newColor;
            if(sr >= 1) { rush_flood(image , sr - 1 , sc , color , newColor); }
            if(sc >= 1) { rush_flood(image , sr , sc - 1 , color , newColor); }
            if(sr < image.size() - 1) { rush_flood(image , sr+1 , sc , color , newColor);}
            if(sc < image[sr].size() - 1) { rush_flood(image , sr , sc+1 , color , newColor);}
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int color = image[sr][sc];
        if(color != newColor)
        { rush_flood(image , sr , sc , color , newColor); }
        return image;
    }
};
