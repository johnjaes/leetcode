class Solution {
public:
    string Pat_str(string target)
    {
        string str = "";
        map<char, int> ch_list;
        int co = 1;
        for(int i = 0 ; i < target.size() ; i++)
        {
            if(ch_list.find(target[i]) == ch_list.end() )
            {
                ch_list[target[i]] = co;
                co++;
            }
            str += to_string(ch_list[target[i]]);
        }
        return str;
    }
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        string pat = Pat_str(pattern);
        vector<string> ans;
        for(int i = 0 ; i < words.size() ; i++)
        {
            string temp_pat = Pat_str(words[i]);
            if(pat == temp_pat) { ans.push_back(words[i]); }
        }
        
        return ans;
    }
};
