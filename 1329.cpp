class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        for(int y = 0 ; y < mat.size() ; y++)
        {
            int temp_y = y;
            int temp_x = 0;
            vector<int> temp_list;
            while(temp_y < mat.size() && temp_x < mat[0].size())
            {               
                temp_list.push_back(mat[temp_y][temp_x]);
                temp_y++;
                temp_x++;
            }
            sort(temp_list.begin() , temp_list.end());
            temp_y = y;
            temp_x = 0;
            while(temp_y < mat.size() && temp_x < mat[0].size())
            {               
                mat[temp_y][temp_x] = temp_list[0];
                temp_list.erase(temp_list.begin());
                temp_y++;
                temp_x++;
            }
        }
        for(int x = 0 ; x < mat[0].size() ; x++)
        {
            int temp_y = 0;
            int temp_x = x;
            vector<int> temp_list;
            while(temp_y < mat.size() && temp_x < mat[0].size())
            {               
                temp_list.push_back(mat[temp_y][temp_x]);
                temp_y++;
                temp_x++;
            }
            sort(temp_list.begin() , temp_list.end());
            temp_y = 0;
            temp_x = x;
            while(temp_y < mat.size() && temp_x < mat[0].size())
            {               
                mat[temp_y][temp_x] = temp_list[0];
                temp_list.erase(temp_list.begin());
                temp_y++;
                temp_x++;
            }
        }
        
        return mat;
    }
};
