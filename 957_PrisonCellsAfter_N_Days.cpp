class Solution {
public:
    vector<int> prisonAfterNDays(vector<int>& cells, int N) {
        N--;      
        vector<int> temp2;
        temp2.push_back(0);
        for(int j = 1 ; j < 7 ; j++)
        {
            temp2.push_back(cells[j-1] == cells[j+1]);                
        }
        temp2.push_back(0);
        cells = temp2;
        
        vector<int> ini_cells = cells;
        int cycle = 1;
        for(int i = 1 ; i <= N ; i++)
        {
            vector<int> temp;
            temp.push_back(0);
            for(int j = 1 ; j < 7 ; j++)
            {
                temp.push_back(cells[j-1] == cells[j+1]);                
            }
            temp.push_back(0);
            cells = temp;
            if(cells == ini_cells) { cycle = i ; break;}
        }        
        
        for(int i = 1 ; i <= N%cycle ; i++)
        {
            vector<int> temp;
            temp.push_back(0);
            for(int j = 1 ; j < 7 ; j++)
            {
                temp.push_back(cells[j-1] == cells[j+1]);                
            }
            temp.push_back(0);
            cells = temp;            
        }
        return cells;
    }
};
