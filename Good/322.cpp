class Solution {
public:    
    int coinChange(vector<int>& coins, int amount) {
        vector<int> counter(amount+1, amount+1);
        counter[0] = 0;
        for(int i = 1 ; i <= amount ; i++)
        {
            for(int c = 0 ; c < coins.size() ; c++)
            {
                if(coins[c] <= i)
                {
                    counter[i] = min(counter[i], counter[i-coins[c]]+1); 
                }
            }
        }        
        return (counter[amount] > amount) ? -1 : counter[amount];
    }
};
