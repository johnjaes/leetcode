class Solution {
public:
    int lengthOfLastWord(string s) {
        int ans = 0;
        int co = 0;
        for(int i = 0 ; i < s.size() ; i++)
        {
            if(s[i] != ' ')
            {
                co++;
            }
            else
            {
                if(co > 0) { ans = co; }
                co = 0;
            }
        }
        if(co > 0) { ans = co; }
        return ans;
    }
};
