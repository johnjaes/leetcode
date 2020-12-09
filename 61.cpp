/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL) { return head; }        
        vector<ListNode*> all_list;        
        
        while(head != NULL)
        {
            all_list.push_back(head);
            head = head->next;
        }
        
        k = k%all_list.size();
        if(k == 0) { return all_list[0]; }
        all_list[all_list.size()-1]->next = all_list[0];
        all_list[all_list.size()-k-1]->next = NULL;
        
        return all_list[all_list.size()-k];
    }
};
