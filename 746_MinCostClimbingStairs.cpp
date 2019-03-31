class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        vector<int> DP(cost.size() , 0);        
        DP[0] = cost[0];
        DP[1] = cost[1];
        for(int i = 2 ; i < cost.size() ; i++)
        {
            DP[i] = (DP[i-2] > DP[i-1]) ? DP[i-1] : DP[i-2];
            DP[i] += cost[i];
        }
        return DP[DP.size() - 1] > DP[DP.size() - 2] ? DP[DP.size() - 2] : DP[DP.size() - 1];
    }
};
