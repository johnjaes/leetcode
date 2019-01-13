class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin() , g.end());
        sort(s.begin() , s.end());
        int ans = 0;
        int g_it = g.size() - 1;
        int s_it = s.size() - 1;
        while(g_it >= 0 && s_it >= 0)
        {
            if(g[g_it] <= s[s_it])
            {
                ans++;
                g_it--;
                s_it--;
            }
            else
            {
                g_it--;
            }
        }
        return ans;
    }
};
