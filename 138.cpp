/**
 * Definition for singly-linked list with a random pointer.
 * struct RandomListNode {
 *     int label;
 *     RandomListNode *next, *random;
 *     RandomListNode(int x) : label(x), next(NULL), random(NULL) {}
 * };
 */
class Solution {
public:    
    Node* copyRandomList(Node* head) {
        if(head == NULL) { return NULL; }
        
        Node* ans = new Node(head->val, NULL, NULL);
        Node* loop = ans;
        Node* search = head->next;
        map<Node*, Node*> origin_to_new;
        origin_to_new[head] = ans;
        while(search != NULL)
        {
            Node* new_one = new Node(search->val, NULL, NULL);
            loop->next = new_one;                       
            origin_to_new[search] = new_one;
            
            search = search->next;
            loop = loop->next;
        }
        search = head;
        loop = ans;
        while(search != NULL)
        {
            loop->random = (search->random == NULL) ? NULL : origin_to_new[search->random];
            search = search->next;
            loop = loop->next;
        }
        
        return ans;
    }
};
