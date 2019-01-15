class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int DP[m][n] = {0};
        for(int mt = 0 ; mt < m  ; mt++)
        {
            for(int nt = 0 ; nt < n; nt++)
            {
                if(mt == 0 && nt == 0) { DP[mt][nt] = grid[mt][nt]; }
                else
                {                    
                    if(mt > 0 && nt > 0) { DP[mt][nt] = min(DP[mt-1][nt]+grid[mt][nt] , DP[mt][nt-1]+grid[mt][nt]); }
                    else if(mt > 0) { DP[mt][nt] = DP[mt-1][nt]+grid[mt][nt]; }
                    else if(nt > 0) { DP[mt][nt] = DP[mt][nt-1]+grid[mt][nt];}                                         
                }
            }
        }
        return DP[m-1][n-1];
    }
};
