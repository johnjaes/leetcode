class Solution {
public:
    string generateTheString(int n) {
        string ans = "";
        if(n % 2 == 0)
        {
            for(int i = 0 ; i < n-1 ; i++)
            {
                ans += 'x';
            }
            ans += 'y';
        }
        else 
        {
            for(int i = 0 ; i < n ; i++)
            {
                ans += 'x';
            }
        }
        return ans;
    }
};
