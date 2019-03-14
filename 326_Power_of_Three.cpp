class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n <= 0) { return false; }
        if(n == 2) { return false; }
        while(n >= 3)
        {
            if(n % 3 != 0) { return false;}
            n /= 3;
        }
        if(n % 3 != 1) { return false;}
        return true;
    }
};
