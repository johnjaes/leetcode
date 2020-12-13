class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        for(int i = 0 ; i < indices.size() ; i++)
        {
            for(int j = i + 1 ; j < indices.size() ; j++)
            {
                if(indices[i] > indices[j])
                {
                    swap(s[i], s[j]);
                    swap(indices[i], indices[j]);
                }
            }
        }
        return s;
    }
};
