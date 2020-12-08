class Solution {
public:
    int numSubmat(vector<vector<int>>& mat) {
        int r = mat.size();
        int c = mat[0].size();
        for(int i = 0 ; i < r ; i++)
        {
            for(int j = 1 ; j < c ; j++)
            {
                if(mat[i][j] == 1)
                {
                    mat[i][j] = mat[i][j-1]+1;
                }
            }
        }
        int ans = 0;
        for(int i = 0 ; i < r ; i++)
        {
            for(int j = 0 ; j < c ; j++)
            {
                int min_num = mat[i][j];
                for(int k = i ; k < r ; k++)
                {
                    if(mat[k][j] == 0) { break; }
                    min_num = min(mat[k][j], min_num);
                    ans += min_num;
                }
            }
        }
        return ans;
    }
};
