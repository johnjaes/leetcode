class Solution {
public:
    int singleNumber(vector<int>& nums) {
        for (int i = 0; i < nums.size(); i++)
		{
			for (int j = i + 1; j < nums.size(); j++)
			{
				if (nums[i] > nums[j])
				{
					int temp = nums[i];
					nums[i] = nums[j];
					nums[j] = temp;
				}
			}
		}
		for (int co = 0; co < nums.size(); co+=2)
		{
			if (co == nums.size() - 1) { return nums[co]; }
			if (nums[co] != nums[co + 1]) { return nums[co]; }
		}
    }
};
