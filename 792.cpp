class Solution {
public:
    int numMatchingSubseq(string S, vector<string>& words) {
        int ans = 0;
        map<string, bool> Exist_List;
        map<string, bool> not_Exist_List;
        for(int i = 0 ; i < words.size() ; i++)
        {
            if(Exist_List.find(words[i]) != Exist_List.end()) { ans++; continue; }
            if(not_Exist_List.find(words[i]) != not_Exist_List.end()) { continue; }
            if(isSubsequence(words[i], S) == true) 
            {
                ans++; 
                Exist_List[words[i]] = true;
            }
            else
            {
                not_Exist_List[words[i]] = true;
            }
        }
        return ans;
    }
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
