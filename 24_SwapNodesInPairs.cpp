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
    ListNode* swapPairs(ListNode* head) {
        vector<ListNode*> all_data;
		while (head != NULL)
		{
			all_data.push_back(head);
			head = head->next;
		}
		if (all_data.size() == 0) { return head; }
		if (all_data.size() == 1) { return all_data[0]; }
		for (int i = 0; i < all_data.size() - 1; i+=2)
		{
			if (i == 0)
			{
				all_data[i]->next = all_data[i + 1]->next;
				all_data[i + 1]->next = all_data[i];
			}
			else
			{
				all_data[i]->next = all_data[i + 1]->next;
				all_data[i + 1]->next = all_data[i];
				all_data[i - 2]->next = all_data[i + 1];
			}

		}		
		return all_data[1];
    }
};
