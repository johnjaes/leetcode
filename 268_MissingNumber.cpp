class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int ans = (1+nums.size())*nums.size()/2;
        for(int i = 0 ; i < nums.size() ; i++)
        {
            ans -= nums[i];
        }
        return ans;
    }
};
