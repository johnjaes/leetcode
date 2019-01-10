class Solution {
public:
    vector<vector<int>> ans;    
    void greedy_all(vector<int>& nums , vector<int> now , map<int,bool> use_list)
    {
        if(now.size() == nums.size()) { ans.push_back(now); return; }
        for(int n = 0 ; n < nums.size() ; n++)
        {
            if(use_list.find(n) == use_list.end())
            {
                use_list[n] = true;
                now.push_back(nums[n]);
                greedy_all(nums , now , use_list);
                now.erase(now.begin()+now.size()-1);
                use_list.erase(n);
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {        
        for(int i = 0 ; i < nums.size() ; i++)
        {
            vector<int> temp_space;
            temp_space.push_back(nums[i]);
            map<int , bool> temp_use;
            temp_use[i] = true;
            greedy_all(nums , temp_space , temp_use);
        }
        return ans;
    }
};
