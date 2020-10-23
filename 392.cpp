class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(t.size() < s.size()) { return false; }
        int index = -1;
        for(int i = 0 ; i < s.size() ; i++)
        {
            bool IsExisted = false;
            for(int j = index+1 ; j < t.size() ; j++)
            {
                if(s[i] == t[j])
                {
                    index = j;
                    IsExisted = true;
                    break;
                }               
            }
            if(IsExisted == false) { return false; }
        }
        return true;
    }
};
