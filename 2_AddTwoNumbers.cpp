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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int count_l1 = 0;
		ListNode* l1_s = l1;
        while(l1_s != NULL)
        {
			count_l1++;
			l1_s = l1_s->next;
        }
		int count_l2 = 0;
		ListNode* l2_s = l2;
        while(l2_s != NULL)
        {
			count_l2++;
			l2_s = l2_s->next;
        }   
		
		if (count_l1 < count_l2)
		{
			ListNode* temp = l1;
			l1 = l2;
			l2 = temp;
		}
		l1_s = l1;
		l2_s = l2;
		
		int add_one = 0;
		while (l1_s != NULL && l2_s != NULL)
		{
			l1_s->val += l2_s->val + add_one;
			add_one = 0;
			if (l1_s->val >= 10) { add_one = l1_s->val / 10; l1_s->val %= 10; }
			if (l1_s->next == NULL || l2_s->next == NULL) { break; }
			l1_s = l1_s->next;
			l2_s = l2_s->next;
		}
		if (add_one != 0)
		{
			if (l1_s->next == NULL) { l1_s->next = new ListNode(add_one); }
			else
			{
				l1_s->next->val += add_one;
			}
		}
		l1_s = l1;
		while (l1_s != NULL)
		{
			if (l1_s->val >= 10)
			{
				if (l1_s->next == NULL) { l1_s->next = new ListNode(l1_s->val / 10); }
				else { l1_s->next->val += l1_s->val / 10; }

				l1_s->val %= 10;
			}
			l1_s = l1_s->next;
		}
		return l1;
    }
};
