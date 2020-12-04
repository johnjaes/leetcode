class Solution {
public:
    int climbStairs(int n) {
        if(n == 1) { return 1; }
        else if(n == 2) { return 2; }
        
        vector<int> DP(n, 0);
        DP[0] = 1;
        DP[1] = 2;
        for(int i = 2 ; i < n ; i++)
        {
            DP[i] = DP[i-1] + DP[i-2];
        }
        return DP[n-1];
    }
};
