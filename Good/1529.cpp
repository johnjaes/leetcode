class Solution {
public:
    int minFlips(string target) {
        int ans = 0;
        char now = '0';
        for(int i = 0 ; i < target.size() ; i++)
        {
            if(target[i] != now)
            {
                now = target[i];
                ans++;
            }
        }
        return ans;
    }
};
