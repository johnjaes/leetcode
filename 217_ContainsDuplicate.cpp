class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int , bool> check_list;
        for(int i = 0 ; i < nums.size() ; i++)
        {
            if(check_list.find(nums[i]) != check_list.end())
            {
                return true;
            }
            check_list[nums[i]] = true;
        }
        return false;
    }
};
