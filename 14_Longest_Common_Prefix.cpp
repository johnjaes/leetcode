class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        if(strs.size() == 0) { return ""; }
        if(strs.size() == 1) { return strs[0]; }
        
        for(int pre = 0; pre < strs[0].length() ; pre++)
        {       
            bool isOK = true;
            for(int i = 1 ; i < strs.size() ; i++)
            {
                if(pre == strs[i].size()) 
                {
                    isOK = false;
                    break; 
                }
                if(strs[i][pre] != strs[0][pre])
                {
                    isOK = false;
                    break;
                }
            }
            if(isOK == false) { break; }
            ans += strs[0][pre];
        }
        
        return ans;
    }
};
