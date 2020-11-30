class Solution {
public:
    vector<int> advantageCount(vector<int>& A, vector<int>& B) {
        vector<int> ans;
        multiset<int> new_A(A.begin(), A.end());
        for(int i = 0 ; i < B.size() ; i++)
        {
            auto it = (*new_A.rbegin() <= B[i] ) ? new_A.begin() : new_A.upper_bound(B[i]);
            ans.push_back(*it);
            new_A.erase(it);
        }
        
        return ans;
    }
};
