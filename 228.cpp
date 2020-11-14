class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> ans;
        if(nums.size() == 0) { return ans; }
        
        int start = nums[0];
        for(int i = 1 ; i < nums.size() ; i++)
        {
            if(nums[i] == nums[i-1]+1) { continue; }         
            
            if(start == nums[i-1])
            {
                string new_part;
                new_part += to_string(start);                        
                ans.push_back(new_part);
            }
            else
            {
                string new_part;
                new_part += to_string(start) + "->" + to_string(nums[i-1]);                        
                ans.push_back(new_part);
            }    
            
            start = nums[i];
        }
        if(start == nums[nums.size()-1])
        {
            string new_part;
            new_part += to_string(start);                        
            ans.push_back(new_part);
        }
        else
        {
            string new_part;
            new_part += to_string(start) + "->" + to_string(nums[nums.size()-1]);                        
            ans.push_back(new_part);
        }    
        
        return ans;
    }
};
