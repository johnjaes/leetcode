#include<math.h>
class Solution {
public:
    int getMaximumGold(vector<vector<int>>& grid) {
        int max_gold = 0;
        for(int x = 0 ; x < grid.size() ; x++)
        {
            for(int y = 0 ; y < grid[x].size() ; y++)
            {
                int get_gold = dfs(grid,x,y);
                if(get_gold > max_gold) { max_gold = get_gold; }
            }
        }        
        return max_gold;
    }
    int dfs(vector<vector<int>>& grid, int x , int y)
    {
        if(grid[x][y] == 0) { return 0; }
        int this_value = grid[x][y];
        grid[x][y] = 0;
        int max = 0;
        if(x > 0)
        {
            int temp = dfs(grid,x-1,y);
            if(temp > max) { max= temp; }
        }
        if(x < grid.size() - 1) 
        {
            int temp = dfs(grid,x+1,y); 
            if(temp > max) { max= temp; }
        }
        if(y > 0) 
        {
            int temp = dfs(grid,x,y-1); 
            if(temp > max) { max= temp; }
        }
        if(y < grid[x].size() - 1)
        {
            int temp = dfs(grid,x,y+1); 
            if(temp > max) { max= temp; }
        }
        
        grid[x][y] = this_value;
        return max+this_value;
    }
    
};
