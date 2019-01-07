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
    ListNode* reverseList(ListNode* head) {
        ListNode* bef = NULL;
        ListNode* now = head;
        while(now != NULL)
        {
            ListNode* next = now->next;
            now->next = bef;
            bef = now;
            now = next;
        }
        return bef;
    }
};
