class Solution {
public:
    int longestPalindrome(string s) {
        map<char , int> counter;
        for(int i = 0 ; i < s.size() ; i++)
        {
            if(counter.find(s[i]) == counter.end())
            {
                counter[s[i]] = 0;
            }
            counter[s[i]]++;
        }
        int ans = 0;
        bool odd_have = false;
        for(map<char , int>::iterator it = counter.begin() ; it != counter.end() ; it++)
        {
            ans += ( (it->second/2 )*2);
            if(it->second % 2 == 1 && odd_have == false)
            {
                ans += it->second % 2;
                odd_have = true;
            }
        }
        return ans;
    }
};
