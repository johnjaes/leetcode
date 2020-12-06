class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        map<string, bool> city;
        for(int i = 0 ; i < paths.size() ; i++)
        {
            city[paths[i][0]] = true;
            if(city.find(paths[i][1]) == city.end())
            {
                city[paths[i][1]] = false;
            }
        }
        for(map<string, bool>::iterator it = city.begin() ; it != city.end() ; it++)
        {
            if(it->second == false)
            {
                return it->first;
            }
        }
        return "";
    }
};
