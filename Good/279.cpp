class Solution {
public:    
    int numSquares(int n) {
        vector<int> DP(n+1, INT_MAX);
        DP[0] = 0;
        for(int i = 0 ; i <= n ; i++)
        {
            for(int j = 1 ; i + j * j <= n ; j++ )
            {
                DP[i+j*j] = min(DP[i+j*j], DP[i]+1);
            }
        }
        return DP[n];
    }
};
