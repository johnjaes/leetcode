class Solution {
public:
    int trap(vector<int>& height) {
        int ans = 0;
		
		int left = 0;
		int right = height.size() - 1;
		
		while (left <= right)
		{
			if (height[left] <= height[right])
			{
				for (int i = left + 1; i <= right; i++)
				{
					if (height[i] < height[left]) { ans += height[left] - height[i]; }
					else
					{
						left = i-1;
						break;
					}
				}
				left++;
			}
			else
			{
				for (int i = right - 1; i >= left; i--)
				{
					if (height[i] < height[right]) { ans += height[right] - height[i]; }
					else
					{
						right = i+1;
						break;
					}
				}
				right--;
			}
		}

		return ans;
    }
};
