class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = 0;
        for(int i = 0 ; i < nums.size() - n ; i++)
        {
            if(nums[i] == 0)
            {
                nums.erase(nums.begin()+i);
                nums.insert(nums.begin() , 0);
            }
            else if(nums[i] == 2)
            {
                nums.erase(nums.begin()+i);
                nums.insert(nums.end() , 2);
                i--; 
                n++;
            }
        }
        
    }
};
