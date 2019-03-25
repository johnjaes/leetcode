class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        for(int i = 0 ; i < flowerbed.size() ; i++)
        {
            if(flowerbed[i] == 1) { continue; }
            bool left = true;
            if(i != 0)
            {
                left = flowerbed[i-1] == 1 ? false : true;
            }
            bool right = true;
            if(i != flowerbed.size() - 1)
            {
                right = flowerbed[i+1] == 1 ? false : true;
            }
            if(left && right)
            {
                n--;
                flowerbed[i] = 1;
            }
        }
        return n <= 0 ? true : false;
    }
};
