class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> codes{".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.." };
        map<string, int> ans;
        for(int i = 0 ; i < words.size(); i++)
        {
            string temp = "";
            for(int j = 0 ; j < words[i].size() ; j++)
            {
                temp += codes[words[i][j] - 'a'];
            }
            ans[temp] = 1;
        }
        return ans.size();
    }
};
