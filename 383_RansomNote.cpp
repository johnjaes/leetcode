class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> counter(30 , 0);
        for(int i = 0 ; i < ransomNote.size() ; i++)
        {
            counter[ ransomNote[i] - 'a']++;
        }
        for(int i = 0 ; i < magazine.size() ; i++)
        {
            counter[ magazine[i] - 'a']--;
        }
        for(int i = 0 ; i < 30 ; i++)
        {
            if(counter[i] > 0) { return false; }
        }
        return true;
    }
};
