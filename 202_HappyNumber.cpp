class Solution {
public:
    bool isHappy(int n) {
        map<int , bool> checks;
        while(n != 1)
        {            
            if(checks.find(n) != checks.end()) { return false; }
            checks[n] = true;
            
            int temp = 0;
            while(n != 0)
            {
                temp += ((n%10)*(n%10));
                n /= 10;
            }
            n = temp;
        }
        return true;
    }
};
