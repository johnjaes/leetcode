class Solution {
public:
    int countNumbersWithUniqueDigits(int n) {
        if(n == 0) { return 1; }
        int multi_list[] = {9,9,8,7,6,5,4,3,2,1};
        int ans = 10;
        for(int i = 2 ; i <= n ; i++)
        {
            int co = 1;
            for(int j = 0 ; j < i ; j++)
            {
                co *= multi_list[j];
            }
            ans += co;
        }
        return ans;
    }
};
