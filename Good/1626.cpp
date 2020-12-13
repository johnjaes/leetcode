class Solution {
public:
    int bestTeamScore(vector<int>& scores, vector<int>& ages) {
        int n = ages.size();
        for(int i = 0 ; i < n ; i++)
        {
            for(int j = i+1 ; j < n ; j++)
            {
                if(ages[i] > ages[j])
                {
                    swap(ages[i], ages[j]);
                    swap(scores[i], scores[j]);
                }
                else if(ages[i] == ages[j] && scores[i] > scores[j])
                {
                    swap(scores[i], scores[j]);
                }
            }
        }
        vector<int> DP(n, 0);
        DP[0] = scores[0];
        int ans = DP[0];
        for(int i = 1 ; i < n ; i++)
        {            
            int max_n = 0;
            for(int j = 0 ; j < i ; j++)
            {
                if(scores[i] < scores[j] && ages[i] != ages[j]) { continue; }
                if(max_n < DP[j]) { max_n = DP[j]; }
            }
            DP[i] = max_n + scores[i];       
            if(ans < DP[i]) { ans = DP[i]; }
        }
        
        return ans;
    }
};
