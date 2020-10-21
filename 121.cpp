class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans = 0;
        int min = 9999;
        for(int i = 0 ; i < prices.size() ; i++)
        {
            if(min > prices[i])
            {
                min = prices[i];
            }
            if(prices[i] - min > ans)
            {
                ans = prices[i] - min;
            }
        }
        return ans;
    }
};
