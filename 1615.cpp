class Solution {
public:
    int maximalNetworkRank(int n, vector<vector<int>>& roads) {
        vector<int> rank(n+1, 0);
        map<int, vector<bool>> connected;
        for(int i = 0 ; i < n ; i++)
        {
            connected[i] = vector<bool>(n, false);
        }
        for(int i = 0 ; i < roads.size() ; i++)
        {
            rank[roads[i][0]] += 1;
            rank[roads[i][1]] += 1;            
            connected[roads[i][0]][roads[i][1]] = true;
            connected[roads[i][1]][roads[i][0]] = true;
        }
        int ans = 0;
        for(int i = 0 ; i < n ; i++)
        {
            for(int j = i+1 ; j < n ; j++)
            {
                int temp = rank[i] + rank[j];
                if(connected[i][j] == true) { temp -= 1; }
                if(temp > ans) { ans = temp; }
            }
        }
        return ans;
    }
};
