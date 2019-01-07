class Solution {
public:
    bool isSelfCrossing(vector<int>& x) {
        if (x.size() < 4) { return false; }
		if (x[0] >= x[2] && x[1] <= x[3]) { return true; }		
		else 
		{
			bool check_it = (x[2] <= x[0]) ? true : false;
			for (int i = 3; i < x.size(); i++)
			{
				if (check_it == true)
				{
					if (x[i] >= x[i - 2])
					{
						return true;
					}
				}				
				else
				{
					if (x[i] <= x[i - 2])
					{
						check_it = true;
						if (x[i - 2] - x[i - 4] <= x[i])
						{
							x[i - 1] = x[i - 1] - x[i - 3];
						}
					}
				}
			}
			return false;
		}
    }
};
