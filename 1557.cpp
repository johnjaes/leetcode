class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        map<int, int> N_co;
        for(int i = 0 ; i < n ; i++)
        {
            N_co[i] = 0;            
        }
        for(int i = 0 ; i < edges.size(); i++)
        {
            N_co[edges[i][1]]++;
        }
        
        vector<int> ans;
        for(int i = 0 ; i < n ; i++)
        {
            if(N_co[i] == 0)
            {
                ans.push_back(i);
            }
        }
        
        return ans;
    }
};
