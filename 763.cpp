class Solution {
public:
    vector<int> partitionLabels(string S) {
        vector<int> ans;
        
        map<char, int> last;
        for(int i = 0 ; i < S.size() ; i++)
        {
            last[S[i]] = i;
        }
        
        for(int i = 0 ; i < S.size() ; i++)
        {
            int this_last = last[S[i]];
            for(int search = i ; search < this_last ; search++ )
            {
                if(this_last < last[S[search]]) { this_last = last[S[search]]; }
            }
            ans.push_back(this_last + 1 - i);
            i = this_last;
            
        }
        
        
        return ans;
    }
};
