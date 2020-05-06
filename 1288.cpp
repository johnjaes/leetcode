class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        map<int , bool> delete_list;        
        for(int i = 0 ; i < intervals.size() ; i++)
        {
            if(delete_list.find(i) != delete_list.end()) { continue; }
            for(int j = i+1 ; j < intervals.size() ; j++)
            {
                if(delete_list.find(j) != delete_list.end()) { continue; }
                if(intervals[i][0] <= intervals[j][0] && intervals[j][1] <= intervals[i][1])
                {
                    delete_list[j] = true;
                }
                else if(intervals[j][0] <= intervals[i][0] && intervals[i][1] <= intervals[j][1])
                {
                    delete_list[i] = true;
                    break;
                }
            }
        }
        return intervals.size() - delete_list.size();
    }
};
