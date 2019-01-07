class Solution {
public:
    int titleToNumber(string s) {
        int ans = 0;
        for(int i = 0 ; i < s.size() ; i++)
        {
            int temp = (int) s[i];
            temp -= 64;
            for(int j = 0 ; j < s.size() - i - 1 ; j++)
            {
                temp *= 26;
            }
            ans += temp;
        }
        return ans;
    }
};
