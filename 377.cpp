class Solution {
public:    
    vector<int> DP;
    int DP_solve(vector<int>& nums, int target)
    {
        int ans = 0;
        for(int i = 0 ; i < nums.size() ; i++)
        {
            if(nums[i] == target) { ans++; }
            else if(nums[i] > target) { break; }
            else
            {                
                if(DP[target - nums[i]] != -1)
                {
                    ans += DP[target - nums[i]];
                }
                else { ans += DP_solve(nums, target - nums[i]); }
            }
        }
        DP[target] = ans;
        return ans;
    }
    int combinationSum4(vector<int>& nums, int target) {        
        DP = vector(target+1, -1);
        sort(nums.begin(), nums.end());
        return DP_solve(nums, target);
    }
};
