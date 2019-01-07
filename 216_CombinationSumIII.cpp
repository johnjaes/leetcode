class Solution {
public:
    vector<vector<int>> test;
	void check_ans(int k, int n, vector<int> list, int ans , int target)
	{
		list.push_back(target);
		ans = ans - target;
		if (ans < 0 || list.size() > k) { return; }
		if (list.size() == k && ans == 0)
		{
			test.push_back(list);
		}
		for (int i = target+1; i <= 9; i++)
		{
			check_ans(k, n, list, ans, i);
		}
	}
	vector<vector<int>> combinationSum3(int k, int n) {
		test.clear();
		vector<int> list_empty;
		for (int i = 1; i <= 9; i++)
		{
			check_ans(k, n, list_empty, n, i);
		}		
		return test;
	}
};
