class Solution {
public:
    int minCostToMoveChips(vector<int>& position) {
        int odd = 0;
        int even = 0;
        for(int i = 0 ; i < position.size() ; i++)
        {
            if(position[i] %2 == 0) { odd++; }
            else { even++; }
        }
        return (odd > even) ? even : odd;
    }
};
