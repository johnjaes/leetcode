class Solution {
public:
    vector<int> processQueries(vector<int>& queries, int m) {
        vector<int> ans;
        
        vector<int> permu;
        for(int i = 0 ; i < m ; i++) { permu.push_back(i+1); }
        for(int i = 0 ; i < queries.size() ; i++)
        {
            vector<int>::iterator it = find(permu.begin(), permu.end(), queries[i]);
            ans.push_back(it - permu.begin());
            permu.erase(it);
            permu.insert(permu.begin(), queries[i]);                       
        }        
        return ans;
    }
};
