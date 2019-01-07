bool re_over(const pair<int, int>& a, const pair<int, int>& b)
{
	if (a.second < b.second) { return true; }
	else if (a.second == b.second) { return a.first < b.first; }
	else { return false; }
}
class Solution {
public:
	
	int findMinArrowShots(vector<pair<int, int>>& points) {
		sort(points.begin(), points.end(), re_over);
		int start = 0;
		int ans = 0;
		while (start < points.size())
		{
			ans++;
			int j = start + 1;
			while (j < points.size() && points[start].second >= points[j].first) { j++; }
			start = j;
		}
		return ans;
	}
};
