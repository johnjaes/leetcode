class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        map<int , int> checks;
        for(int i = 0 ; i < nums.size() ; i++)
        {
            if(checks.find(nums[i]) != checks.end() && k >= i - checks[nums[i]])
            {
                return true;
            }
            checks[nums[i]] = i;
        }
        return false;
    }
};
