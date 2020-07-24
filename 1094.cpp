class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        vector<int> trip_list(1001, 0);
        for(int i = 0 ; i < trips.size() ; i++)
        {
            trip_list[trips[i][1]] += trips[i][0];
            trip_list[trips[i][2]] -= trips[i][0];
        }
        int co = 0;
        for(int i = 0 ; i < trip_list.size() ; i++)
        {
            co += trip_list[i];
            if(co > capacity) { return false; }
        }
        return true;
    }
};
