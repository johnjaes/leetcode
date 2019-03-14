class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        if(nums.size() < 2) { return 0; }
        sort(nums.begin() , nums.end());
        int ans = 0;
        map<int, map<int , bool>> same_check;
        for(int i = 0 ; i < nums.size() - 1 ; i++)
        {            
            for(int j = i+1 ; j < nums.size() ; j++)
            {
                if(nums[j] - nums[i] == k) 
                {                    
                    if(same_check.find(nums[i]) == same_check.end())
                    {                        
                        ans++; 
                        map<int , bool> temp;
                        same_check[nums[i]] = temp;
                        same_check[nums[i]][nums[j]] = true;                        
                    }
                    else
                    {
                        if(same_check[nums[i]].find(nums[j]) == same_check[nums[i]].end())
                        {
                            ans++;
                            same_check[nums[i]][nums[j]] = true;                            
                        }
                    }                        
                    
                }
                else if(nums[j] - nums[i] > k) { break; }
            }            
        }
        
        return ans;
    }
};
