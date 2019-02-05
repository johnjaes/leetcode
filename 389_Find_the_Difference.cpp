class Solution {
public:
    char findTheDifference(string s, string t) {
        map<char , int> counter;
        for(int i = 0 ; i < s.size() ; i++)
        {
            if(counter.find(s[i]) == counter.end())
            {
                counter[s[i]] = 0;
            }
            counter[s[i]]++;
        }
        for(int i = 0 ; i < t.size() ; i++)
        {
            if(counter.find(t[i]) == counter.end())
            {
                return t[i];
            }
            if(counter[t[i]] == 0) 
            {
                return t[i];
            }
            counter[t[i]]--;
        }
        return 'a';
    }
};
