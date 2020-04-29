/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if (lists.size() > 1)
		{
			vector<ListNode*> ans;
			for (int i = 0; i < lists.size(); i++)
			{
				ListNode* loop = lists[i];
				while (loop != NULL)
				{
					ans.push_back(loop);
					loop = loop->next;
				}
			}
			for (int i = 0; i < ans.size(); i++)
			{
				for (int j = i + 1; j < ans.size(); j++)
				{
					if (ans[i]->val > ans[j]->val)
					{
						ListNode* temp = ans[i];
						ans[i] = ans[j];
						ans[j] = temp;
					}
				}
			}
			for (int i = 0; i < ans.size(); i++)
			{
				if (i != ans.size() - 1)
				{
					ans[i]->next = ans[i + 1];
				}
				else
				{
					ans[i]->next = NULL;
				}
			}
			if (ans.size() == 0) { return NULL; }
			else { return ans[0]; }
		}
		else if (lists.size() == 1) { return *(lists.begin()); }
		else { return NULL; }
    }
};
