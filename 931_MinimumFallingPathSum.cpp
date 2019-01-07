class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& A) {
        vector<int> v(A.size(), 0);
		vector<vector<int>> vv;
		for (int i = 0; i < A.size(); i++) { vv.push_back(v); }
		for (int ini = 0; ini < A.size(); ini++) { vv[0][ini] = A[0][ini]; }
		for (int row = 0; row < A.size(); row++)
		{
			if (row == A.size() - 1) { break; }
			for (int column = 0; column < A.size(); column++)
			{
				int min = (column == 0) ? 0 : column - 1;
				int max = (column == A.size() - 1) ? A.size() : column + 2;
				for (int target_c = min; target_c < max; target_c++)
				{
					if (vv[row + 1][target_c] == 0) { vv[row + 1][target_c] = vv[row][column] + A[row + 1][target_c]; continue; }
					if (vv[row + 1][target_c] > vv[row][column] + A[row + 1][target_c])
					{
						vv[row + 1][target_c] = vv[row][column] + A[row + 1][target_c];
					}
				}				
			}
		}
		int best = vv[A.size() - 1][0];
		for (int loop = 0; loop < A.size(); loop++)
		{			
			if (vv[A.size() - 1][loop] < best) { best = vv[A.size() - 1][loop]; }
		}
		return best;
    }
};
