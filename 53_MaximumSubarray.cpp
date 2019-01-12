class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int now = nums[0];
        int ans = nums[0];
        for(int i = 1 ; i < nums.size() ; i++)
        {            
            now = max(now+nums[i] , nums[i]);
            if(now > ans) { ans = now; }
        }
        return ans;
    }
};
