class Solution {
public:
    string predictPartyVictory(string senate) {
        int p[10000] = { 0 };
		for (int round = 0; round < senate.size(); round++)
		{
			for (int master = 0; master < senate.size(); master++)
			{
				if (p[master] == 0)
				{
					bool has_ban = false;
					for (int target = master + 1; target < senate.size(); target++)
					{
						if (p[target] == 1) { continue; }
						if (senate[master] != senate[target]) { p[target] = 1; has_ban = true; break; }
					}
					if (has_ban == false)
					{
						for (int target = 0; target < master; target++)
						{
							if (p[target] == 1) { continue; }
							if (senate[master] != senate[target]) { p[target] = 1; has_ban = true; break; }
						}
					}
					if (has_ban == false)
					{
						if (senate[master] == 'R') { return "Radiant"; }
						else if (senate[master] == 'D') { return "Dire"; }
					}
				}
			}			
		}
    }
};
