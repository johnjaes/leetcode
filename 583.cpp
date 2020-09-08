class Solution {
public:
    int minDistance(string word1, string word2) {
        int length[word1.size()+1][word2.size()+1];
        for(int i = 0 ; i <= word1.size();i++) { length[i][0] = 0; }
        for(int j = 0 ; j <= word2.size();j++) { length[0][j] = 0; }
        
        for(int i = 1 ; i <= word1.size() ; i++)
        {
            for(int j = 1 ; j <= word2.size() ; j++)
            {
                if(word1[i-1] == word2[j-1])
                {                    
                    length[i][j] = length[i-1][j-1] + 1;
                }
                else
                {
                    length[i][j] = max(length[i-1][j], length[i][j-1]);
                }
            }
        }
        int LCS = length[word1.size()][word2.size()];        
        return word1.size() + word2.size() - 2*LCS;
    }
};
