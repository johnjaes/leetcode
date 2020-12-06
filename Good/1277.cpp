class Solution {
public:
    int countSquares(vector<vector<int>>& matrix) {
        int ans = 0;
        vector<vector<int>> DP(matrix.size(), vector<int>(matrix[0].size(), 0));
        for(int i = 0 ; i < matrix.size() ; i++)
        {
            for(int j = 0 ; j < matrix[i].size() ; j++)
            {
                if(matrix[i][j] == 0) { }
                else if(i == 0 || j == 0)
                {
                    DP[i][j] = matrix[i][j];                    
                }
                else
                {
                    DP[i][j] = min(DP[i-1][j-1], min(DP[i-1][j],DP[i][j-1])) + 1;  
                }                
                ans += DP[i][j];
            }            
        }
        return ans;
    }
};
