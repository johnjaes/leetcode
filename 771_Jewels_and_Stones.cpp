class Solution {
public:
    int numJewelsInStones(string J, string S) {
        map<char , bool> jewels;
        for(int i = 0 ; i < J.length() ; i++)
        {
            jewels[J[i]] = true;
        }
        int ans = 0;
        for(int i = 0 ; i < S.length() ; i++)
        {
            if(jewels.find(S[i]) != jewels.end())
            {
                ans++;
            }
        }
        return ans;
    }
};
