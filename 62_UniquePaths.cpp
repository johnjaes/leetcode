class Solution {
public:
	int uniquePaths(int m, int n) {
		vector<vector<int>> array_int;
		vector<int> temp_y(n, 0);
		for (int i = 0; i < m; i++)
		{
			array_int.push_back(temp_y);
		}
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (i == 0 && j == 0) { array_int[i][j] = 1; }
				else
				{
					int left_m = 0 , up_n = 0;
					if (i != 0) { left_m = array_int[i - 1][j]; }
					if (j != 0) { up_n = array_int[i][j - 1]; }
					array_int[i][j] = left_m + up_n;
				}
			}
		}
		return array_int[m - 1][n - 1];
	}
};
