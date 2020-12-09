class Solution {
public:
    vector<vector<int>> ans;
    
    void build_set(vector<int>& nums, int now, vector<int> sub)
    {       
        sub.push_back(nums[now]);
        ans.push_back(sub);
        for(int i = now + 1 ; i < nums.size() ; i++ )
        {
            build_set(nums, i, sub);
        }
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> space;
        ans.push_back(space);
        for(int i = 0 ; i < nums.size() ; i++)
        {
            build_set(nums, i, space);
        }
        return ans;
    }
};
