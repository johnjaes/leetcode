class Solution {
public:
    vector<int> powerfulIntegers(int x, int y, int bound) {
        vector<int> ans;
        map<int, bool> exists;
        for(int i = 0 ; ; i++)
        {
            int x_num = pow(x, i);
            if(x_num > bound) { break; }
            if(i > 0 && x == 1) { break; }
            for(int j = 0 ; ; j++)
            {
                if(j > 0 && y == 1) { break; }
                int y_num = pow(y, j);
                if(x_num + y_num > bound) { break; }                
                if(exists.find(x_num + y_num) != exists.end()) { continue; }
                exists[x_num + y_num] = true;
                ans.push_back(x_num + y_num);                
            }            
        }
        return ans;
    }
};
