class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        vector< vector<int> > DP(m, vector<int>(n, 0) );
        int ans = 0;
        for(int i = 0 ; i < m ; i++)
        {
            for(int j = 0 ; j < n ; j++)
            {
                if(matrix[i][j] == '0') { continue; }
                if(i == 0 || j == 0)
                {
                    DP[i][j] = 1;
                    if(ans < DP[i][j])
                    {
                        ans = DP[i][j];                        
                    }
                }
                else
                {
                    DP[i][j] = min(min(DP[i-1][j], DP[i][j-1]), DP[i-1][j-1])+1;
                    if(ans < DP[i][j])
                    {                        
                        ans = DP[i][j];                        
                    }
                }
            }
        }
        
        return ans*ans;
    }
};
