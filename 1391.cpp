class Solution {
public:
    vector<vector<int>> map_grid;
    bool ans = false;    
    bool Search_Path(vector<vector<int>>& path_grid, int x, int y)
    {        
        path_grid[y][x] = 1;          
        if(y == map_grid.size()-1 && x == map_grid[0].size()-1) { ans = true; }
        if(ans == true) { return ans; }
        
        if( x > 0)
        {
            if(path_grid[y][x-1] == 0 && (map_grid[y][x] == 1 || map_grid[y][x] == 3 || map_grid[y][x] == 5) && (map_grid[y][x-1] == 1 || map_grid[y][x-1] == 4 || map_grid[y][x-1] == 6) )
            {
                Search_Path(path_grid, x-1, y);
            }
        }
        if( x < map_grid[0].size()-1)
        {
            if(path_grid[y][x+1] == 0 && (map_grid[y][x] == 1 || map_grid[y][x] == 4 || map_grid[y][x] == 6) && (map_grid[y][x+1] == 1 || map_grid[y][x+1] == 3 || map_grid[y][x+1] == 5) )
            {
                Search_Path(path_grid, x+1, y);
            }
        }
        if( y > 0)
        {
            if(path_grid[y-1][x] == 0 && (map_grid[y][x] == 2 || map_grid[y][x] == 5 || map_grid[y][x] == 6) && (map_grid[y-1][x] == 2 || map_grid[y-1][x] == 3 || map_grid[y-1][x] == 4) )
            {
                Search_Path(path_grid, x, y-1);
            }
        }
        if( y < map_grid.size()-1)
        {
            if(path_grid[y+1][x] == 0 && (map_grid[y][x] == 2 || map_grid[y][x] == 3 || map_grid[y][x] == 4) && (map_grid[y+1][x] == 2 || map_grid[y+1][x] == 5 || map_grid[y+1][x] == 6)  )
            {
                Search_Path(path_grid, x, y+1);
            }
        }   
        
        path_grid[y][x] = 0;
        return ans;
    }
    bool hasValidPath(vector<vector<int>>& grid) {
        map_grid = grid;
        ans = false;
        vector<vector<int>> DFS(grid.size(), vector<int>(grid[0].size(), 0));        
        Search_Path(DFS, 0, 0);
        
        return ans;
    }
};
