class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        map<int , int> checks;
        for(int i = 0 ; i < nums1.size() ; i++ )
        {
            if(checks.find(nums1[i]) == checks.end())
            {
                checks[nums1[i]] = 0;
            }            
            checks[nums1[i]]++;
        }
        for(int i = 0 ; i < nums2.size() ; i++)
        {
            if(checks.find(nums2[i]) != checks.end())
            {
                if(checks[nums2[i]] > 0)
                {
                    ans.push_back(nums2[i]);
                    checks[nums2[i]]--;
                }                
            }            
        }
        
        return ans;
    }
};
