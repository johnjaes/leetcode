class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        int ans = -1;
        
        map<char , int> the_first_C;
        for(int i = 0 ; i < s.size() ; i++)
        {
            if(the_first_C.find(s[i]) == the_first_C.end())
            {
                the_first_C[s[i]] = i;
            }
            else
            {
                ans = ans > (i - the_first_C[s[i]])-1 ? ans : (i - the_first_C[s[i]])-1;
            }
        }
        
        return ans;
    }
};
