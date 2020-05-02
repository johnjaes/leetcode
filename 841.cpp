class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {        
        map<int , bool> door_opened;
        door_opened[0] = true;
        vector<int> have_keys = rooms[0];
        
        while(have_keys.size() > 0)
        {
            int target = have_keys[0];
            have_keys.erase(have_keys.begin());
            door_opened[target] = true;
            if(door_opened.size() == rooms.size()) { return true; }
            
            for(int co = 0 ; co < rooms[target].size() ; co++)
            {
                if(door_opened.find(rooms[target][co]) == door_opened.end())
                {
                    have_keys.push_back(rooms[target][co]);
                }
            }
        }
        if(door_opened.size() == rooms.size()) { return true; }
        
        return false;
    }
};
