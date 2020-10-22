class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans = 0;
        int temp = 0;
        for(int i = 0 ; i < nums.size() ; i++)
        {
            if(nums[i] == 1) { temp++; }
            if(nums[i] == 0 || i == nums.size() - 1)
            {
                ans = (ans < temp) ? temp : ans;
                temp = 0;
            }
        }
        return ans;
    }
};
