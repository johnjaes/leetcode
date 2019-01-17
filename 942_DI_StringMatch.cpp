class Solution {
public:
    vector<int> diStringMatch(string S) {
        int n = S.size()+1;
        int low = 0 ; 
        int up = n-1;
        vector<int> ans(n , 0);
        for(int i = 0 ; i < n-1 ; i++)
        {
            if(S[i] == 'I')
            {
                ans[i] = low;
                low++;
            }
            else
            {
                ans[i] = up;
                up--;
            }
        }
        ans[n-1] = low;
        return ans;
    }
};
