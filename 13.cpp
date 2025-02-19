class Solution {
public:
    int romanToInt(string s) {
        map<char, int> ref_Roman_to_Num;
        ref_Roman_to_Num['I'] = 1;
        ref_Roman_to_Num['V'] = 5;
        ref_Roman_to_Num['X'] = 10;
        ref_Roman_to_Num['L'] = 50;
        ref_Roman_to_Num['C'] = 100;
        ref_Roman_to_Num['D'] = 500;
        ref_Roman_to_Num['M'] = 1000;
        int ans = 0;
        for(int i = 0 ; i < s.length() ; i++)
        {
            int status = -1;
            if(i == s.length()-1 || ref_Roman_to_Num[s[i+1]] <= ref_Roman_to_Num[s[i]])
            {
                status = 1;
            }
            ans += status * ref_Roman_to_Num[s[i]];
        }
        return ans;
    }
};
