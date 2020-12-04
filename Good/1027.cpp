class Solution {
public:
    int longestArithSeqLength(vector<int>& A) {
        int ans = 2;        
        int n = A.size();
        vector<vector<int> > DP(A.size(), vector<int>(1001, 0));        
        for(int i = 1 ; i < n ; i++)
        {            
            for(int j = 0 ; j < i ; j++)
            {
                int diff = A[j] - A[i] + 500;                
                DP[i][diff] = max(DP[j][diff] + 1 , 2);
                ans = max(ans, DP[i][diff]);
            }
        }
        
        return ans;
    }
};
