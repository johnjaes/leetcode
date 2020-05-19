class Solution {
public:
    vector<vector<int>> matrixBlockSum(vector<vector<int>>& mat, int K) {
        vector<vector<int>> ans;
        for(int i = 0 ; i < mat.size() ; i++)
        {
            vector<int> temp(mat[i].size());
            ans.push_back(temp);
        }
        for(int y = 0 ; y < mat.size() ; y++)
        {
            for(int x = 0 ; x < mat[y].size() ; x++)
            {
                int x_left = (x - K) < 0 ? 0 : x-K;
                int x_right = (x + K) >= mat[y].size() ? mat[y].size()-1 : x+K;
                int y_up = (y - K) < 0 ? 0 : y-K;
                int y_down = (y + K) >= mat.size() ? mat.size() - 1 : y+K;
                
                for(int yy = y_up ; yy <= y_down ; yy++ )
                {
                    for(int xx = x_left ; xx <= x_right ; xx++)
                    {
                        ans[yy][xx] += mat[y][x];
                    }
                }
            }
        }
        return ans;
    }
};
