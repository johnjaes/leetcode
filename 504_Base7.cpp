class Solution {
public:
    string convertToBase7(int num) {
        if(num == 0) { return "0";}
        string ans = "";
        bool minus_it = false;
        if(num < 0) { minus_it = true; num = 0 - num; }
        while(num != 0)
        {
            int temp = num % 7;
            num /= 7;
            ans.insert(ans.begin() , (char) (temp+48));            
        }
        if(minus_it == true) { ans.insert(ans.begin() , '-'); }
        return ans;
    }
};
