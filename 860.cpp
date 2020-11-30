class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five_num = 0;
        int ten_num = 0;
        for(int i = 0 ; i < bills.size() ; i++)
        {
            if(bills[i] == 5) { five_num++; }
            else if(bills[i] == 10) 
            {
                ten_num++; 
                five_num--;
            }
            else
            {
                ten_num--;
                five_num--;
            }            
            if(ten_num < 0) 
            {
                ten_num = 0;
                five_num -= 2;
            }
            if(five_num < 0) { return false; }
        }
        return true;
    }
};
