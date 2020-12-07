class Solution {
public:
    int ans = 0;
    void Loop_S(vector<vector<int>>& grid, int x, int y)
    {
        if(x < 0 || x > grid[0].size() - 1) { return; }
        if(y < 0 || y > grid.size() - 1) { return; }              
        
        for(int i = y ; i >= 0 ; i--)
        {
            if(grid[i][x] >= 0) { break; }            
            ans++;
        }
        for(int j = x-1 ; j >= 0 ; j--)
        {
            if(grid[y][j] >= 0) { break; }            
            ans++;
        }
        
        Loop_S(grid, x-1, y-1 );    
    }
    int countNegatives(vector<vector<int>>& grid) {
        Loop_S(grid, grid[0].size()-1, grid.size()-1);        
        return ans;
    }
};
