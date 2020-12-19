class Solution {
public:
    int findLongestChain(vector<vector<int>>& pairs) {
        for(int i = 0 ; i < pairs.size() ; i++)
        {
            for(int j = i+1 ; j < pairs.size() ; j++)
            {
                if(pairs[i][0] > pairs[j][0]) { swap(pairs[i], pairs[j]); }
            }
        }
        int ans = 0;
        vector<int> DP(pairs.size(), 0 );
        DP[0] = 1;
        for(int i = 1 ; i < pairs.size() ; i++)
        {
            DP[i] = 1;
            for(int j = 0 ; j < i ; j++)
            {
                if(pairs[j][1] < pairs[i][0])
                {
                    DP[i] = max(DP[i], DP[j]+1 );                    
                }
            }
            if(ans < DP[i]) { ans = DP[i]; }
        }
        return ans;
    }
};
