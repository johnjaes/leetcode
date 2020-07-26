class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int now = nums.size() / 2;
        int left = 0, right = nums.size();
        while(1)
        {
            if(now == 0 || now == nums.size() - 1) { return nums[now]; }            
            if(nums[now] != nums[now -1] && nums[now] != nums[now + 1])
            {
                return nums[now];
            }
            if(now % 2 == 0)
            {
                if(nums[now] == nums[now - 1])
                {
                    right = now;
                    now = (now + left)/2;                    
                }
                else
                {
                    left = now;
                    now = (now + right)/2;
                }
            }
            else
            {
                if(nums[now] == nums[now + 1])
                {
                    right = now;
                    now = (now + left)/2;                    
                }
                else
                {
                    left = now;
                    now = (now + right)/2;
                }
            }
        }
    }
};
