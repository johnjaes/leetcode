class Solution {
public:
    int hammingDistance(int x, int y) {
        int i = x ^ y;
        int ans = 0;
        while(i > 0)
        {
            if(i%2 == 1) { ans++; }
            i >>= 1;
        }
        return ans;
    }
};
