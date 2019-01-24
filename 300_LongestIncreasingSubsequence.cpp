class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> DP(nums.size() , 0);
        int ans = 0;
        for(int i = 0 ; i < nums.size() ; i++)
        {
            int max_n = 0;            
            for(int j = 0 ; j < i ; j++)
            {
                if(nums[j] < nums[i])
                {
                    if(DP[j] > max_n)
                    {
                        max_n = DP[j];                        
                    }
                }
            }
            DP[i] = max_n+1;            
            if(DP[i] > ans) { ans = DP[i];}
        }
        return ans;
    }
};
