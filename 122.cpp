class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans = 0;        
        int min = 999999;
        for(int i = 0 ; i < prices.size() ; i++)
        {
            if(min > prices[i])
            {
                min = prices[i];
            }
            if(prices[i] - min > 0)
            {
                ans += prices[i] - min;
                min = prices[i];
            }            
        }
        return ans;
    }
};
