class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        vector<vector<int>> ans;
        map<int , vector<int> > temp_map;
        for(int i = 0 ; i < groupSizes.size() ; i++)
        {
            if(temp_map.find(groupSizes[i]) == temp_map.end())
            {
                vector<int> new_temp;
                temp_map[ groupSizes[i] ] = new_temp;
            }
            temp_map[ groupSizes[i] ].push_back(i);
            
            if(temp_map[groupSizes[i]].size() == groupSizes[i])
            {
                ans.push_back(temp_map[groupSizes[i]]);
                temp_map[groupSizes[i]].clear();
            }
        }
        for(map<int,vector<int>>::iterator it = temp_map.begin() ; it != temp_map.end() ; it++)
        {
            if(it->second.size() != 0)
            {
                ans.push_back(it->second);
            }
        }
        
        return ans;
    }
};
