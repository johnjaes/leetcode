class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int total_now = 0;
        for(int i = 0 ; i < nums.size() ; i++)
        {
            total_now += nums[i];
        }
        vector<int> ans;
        int ans_total = 0;
        for(int i = nums.size() -1 ; i >= 0 ; i--)
        {
            ans.push_back(nums[i]);
            total_now -= nums[i];
            ans_total += nums[i];
            if(ans_total > total_now) { break; }
        }
        
        return ans;
    }
};
