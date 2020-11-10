class Solution {
public:
    bool isPathCrossing(string path) {
        map< pair<int,int> , bool > IsChecked;
        int x = 0, y = 0;
        pair<int , int> ini(0,0);
        IsChecked[ini] = true;
        for(int i = 0 ; i < path.size() ; i++)
        {
            if(path[i] == 'N') { y -= 1; }            
            else if(path[i] == 'S') { y += 1; }
            else if(path[i] == 'E') { x += 1; }
            else if(path[i] == 'W') { x -= 1; }
            pair<int, int> temp(x,y);
            if(IsChecked.find(temp) != IsChecked.end()) { return true; }
            IsChecked[temp] = true;
        }
        
        return false;
    }
};
