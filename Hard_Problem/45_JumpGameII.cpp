class Solution {
public:    
    int jump(vector<int>& nums) {
        if(nums.size() <= 1) { return 0; }
        int right = 0;
        int now = 0;
        int level = 0;
        for(int i = 0 ; i <= now && i < nums.size() ; i++)
        {
            if(i > right)
            {
                level++;
                right = now;
            }
            now = max(now , nums[i]+i);
        }
        if(now < nums.size() - 1) { return 0;}
        
        return level;
    }
};
