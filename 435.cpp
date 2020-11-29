class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        int ans = 0;
        int temp = 0;
        for(int i = 1 ; i < intervals.size(); i++)
        {
            if(intervals[i][0] < intervals[temp][1])
            {
                ans++;
                if(intervals[i][1] < intervals[temp][1] ) { temp = i; }
            }
            else
            {
                temp = i;
            }
        }
        return ans;
    }
};
