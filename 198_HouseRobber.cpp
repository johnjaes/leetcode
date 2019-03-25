class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size() == 0) { return 0; }
        vector<int> DP(nums.size() , 0);
        for(int i = 0 ; i < nums.size() ; i++)
        {
            if(i < 2) { DP[i] = nums[i];}
            else
            {
                int max = DP[i-1];
                if(DP[i-2] + nums[i] > max) { max = DP[i-2] + nums[i]; }
                if(i >= 3 )
                { 
                    if(DP[i-3] + nums[i] > max) { max = DP[i-3] + nums[i]; }
                }
                DP[i] = max;
            }
        }
        if(nums.size() == 1) { return DP[nums.size() - 1]; }
        return DP[nums.size() - 1] > DP[nums.size() - 2] ? DP[nums.size() - 1] : DP[nums.size() - 2];
    }
};
