class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int total_gas = 0, total_cost = 0;
        for(int i = 0 ; i < gas.size() ; i++)
        {
            total_gas += gas[i];
            total_cost += cost[i];
        }
        if(total_gas < total_cost) { return -1; }
        
        int ans = 0;
        int best = 0;
        for(int i = 0 ; i < gas.size() ; i++)
        {
            best += gas[i] - cost[i];
            if(best < 0)
            {
                best = 0;
                ans = i+1;
            }
        }
        
        return ans;
    }
};
