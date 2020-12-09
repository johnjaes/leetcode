class Solution {
public:
    bool isRobotBounded(string instructions) {
        int dir = 0;
        int x = 0, y = 0;
        for(int i = 0 ; i < instructions.size() ; i++)
        {
            if(instructions[i] == 'L') 
            {
                dir -= 1; 
                dir = (dir < 0) ? 3 : dir;
            }
            else if(instructions[i] == 'R')
            {
                dir += 1; 
                dir = (dir == 4) ? 0 : dir;
            }                       
            if(instructions[i] == 'G')
            {
                if(dir == 0) { y += 1; }
                else if(dir == 1) { x += 1; }
                else if(dir == 2) { y -= 1; }
                else if(dir == 3) { x -= 1; }
            }
        }
        if(x == 0 && y == 0) { return true; }
        else if(dir != 0) { return true; }
        
        return false;
    }
};
