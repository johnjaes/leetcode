class Solution {
public:
    int brokenCalc(int X, int Y) {
        int co = 0;
        while(X < Y)
        {
            if( Y % 2 == 1)
            {
                Y++;                
            }
            else
            {
                Y /= 2;
            }
            co++;
        }
        return co + X - Y;
    }
};
