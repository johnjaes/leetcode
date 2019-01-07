class Solution {
public:
    vector<vector<int>> largeGroupPositions(string S) {
        vector<vector<int>> ans;
		int word_start = 0;
		char word_now = ' ';
		for (int i = 0; i < S.size(); i++)
		{
			if (S[i] != word_now)
			{
				if (i - word_start >= 3)
				{
					vector<int> this_t;
					this_t.push_back(word_start);
					this_t.push_back(i - 1);
					ans.push_back(this_t);
				}
				word_now = S[i];
				word_start = i;
			}
			if (i == S.size() - 1)
			{
				if (i - word_start >= 2)
				{
					vector<int> this_t;
					this_t.push_back(word_start);
					this_t.push_back(i);
					ans.push_back(this_t);
				}
				word_now = S[i];
				word_start = i;
			}
		}
		return ans;
    }
};
