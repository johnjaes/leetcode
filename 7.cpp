class Solution {
public:
    int reverse(int x) {
        long long int check = x;
        long long int ans = 0;
        while(check != 0)
        {
            if( ans > INT_MAX /10 || ans < INT_MIN /10) { return 0; }
            ans = ans * 10;
            ans = ans + check%10;
            check /= 10;
        }
        
        
        return ans;
    }
};
