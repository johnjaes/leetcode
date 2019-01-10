class Solution {
public:
    int thirdMax(vector<int>& nums) {
        
        vector<int> ans;
        
        for(int i = 0 ; i < nums.size() ; i++)
        {
            if(ans.size() < 3) 
            {
                ans.push_back(nums[i]); 
                sort(ans.begin() , ans.end());
                for(int i = 0 ; i < ans.size()-1 ; i++)
                {
                    if(ans[i] == ans[i+1]) { ans.erase(ans.begin()+i); }
                }
            }
            else
            {
                ans.push_back(nums[i]);
                sort(ans.begin() , ans.end());
                for(int i = 0 ; i < ans.size()-1 ; i++)
                {
                    if(ans[i] == ans[i+1]) { ans.erase(ans.begin()+i); }
                }
                if(ans.size() > 3) { ans.erase(ans.begin()); }
            }
        }
        sort(ans.begin() , ans.end());        
        return ans.size() == 3 ? ans[0] : ans.size() == 2 ? ans[1] : ans[0];
    }
};
