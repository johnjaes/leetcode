class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        map<int , bool> checks;
        for(int i = 0 ; i < nums1.size() ; i++ )
        {
            checks[nums1[i]] = false;
        }
        for(int i = 0 ; i < nums2.size() ; i++)
        {
            if(checks.find(nums2[i]) != checks.end())
            {
                if(checks[nums2[i]] == false)
                {
                    ans.push_back(nums2[i]);
                    checks[nums2[i]] = true;
                }                
            }
            if(ans.size() == nums1.size()) { break; }
        }
        
        return ans;
    }
};
