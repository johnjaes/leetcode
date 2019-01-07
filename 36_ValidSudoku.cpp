class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for (int x = 0; x < 9; x++)
		{
			map<char, bool> check_list;
			for (int y = 0; y < 9; y++)
			{
				if (board[x][y] != '.')
				{
					if (check_list.find(board[x][y]) == check_list.end())
					{
						check_list[board[x][y]] = true;
					}
					else { return false; }
				}
			}
		}
		for (int y = 0; y < 9; y++)
		{
			map<char, bool> check_list;
			for (int x = 0; x < 9; x++)
			{
				if (board[x][y] != '.')
				{
					if (check_list.find(board[x][y]) == check_list.end())
					{
						check_list[board[x][y]] = true;
					}
					else { return false; }
				}
			}
		}
		for (int x = 0; x < 9; x += 3)
		{
			for (int y = 0; y < 9; y += 3)
			{
				map<char, bool> check_list;
				for (int a1 = x; a1 < x + 3; a1++)
				{
					for (int a2 = y; a2 < y + 3; a2++)
					{
						if (board[a1][a2] != '.')
						{
							if (check_list.find(board[a1][a2]) == check_list.end())
							{
								check_list[board[a1][a2]] = true;
							}
							else { return false; }
						}
					}
				}
			}
		}

		return true;
    }
};
