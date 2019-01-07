class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        if (people.size() == 0) { return 0; }
		if (people.size() == 1) { return 1; }
		sort(people.begin(), people.end());
		
		int ans = 0;
		int i = 0;
		int j = people.size() - 1;
		while (i <= j)
		{
			if (people[i] + people[j] <= limit)
			{				
				i++;				
			}
			j--;
			ans++;
		}
        return ans;
    }
};
