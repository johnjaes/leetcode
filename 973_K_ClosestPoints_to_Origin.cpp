class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int K) {
        vector<vector<int>> ans;
        map<int , int> sort_e;
        for(int i = 0 ; i < points.size() ; i++)
        {
            sort_e[points[i][0]*points[i][0]+points[i][1]*points[i][1]] = i;
        }               
        for(map<int , int>::iterator it = sort_e.begin() ; it != sort_e.end() ; it++)
        {
            ans.push_back(points[it->second]);            
            if(ans.size() == K) { break;  }
        }
        
        return ans;
    }
};
