class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        vector<int> x_Max(grid.size(),0);
        vector<int> y_Max(grid.size(),0);        
        for(int y = 0 ; y < grid.size() ; y++)
        {                       
            int temp_x = 0;
            for(int x = 0 ; x < grid[y].size() ; x++)
            {
                if(temp_x < grid[y][x]) { temp_x = grid[y][x]; }
                if(y_Max[x] < grid[y][x]) { y_Max[x] = grid[y][x]; }
            }
            x_Max[y] = (temp_x);
        }
        int ans = 0;
        for(int i = 0 ; i < grid.size() ; i++)
        {
            for(int j = 0 ; j < grid[i].size() ; j++)
            {
                int the_max = x_Max[i] < y_Max[j] ? x_Max[i] : y_Max[j];
                ans += (the_max) - grid[i][j];
            }
        }
        return ans;
    }
};
