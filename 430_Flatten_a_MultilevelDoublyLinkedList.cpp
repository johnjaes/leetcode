/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;

    Node() {}

    Node(int _val, Node* _prev, Node* _next, Node* _child) {
        val = _val;
        prev = _prev;
        next = _next;
        child = _child;
    }
};
*/
class Solution {
public: 
    vector<Node*> ans;
    void loop_node(Node* node)
    {
        if(node == NULL) { return ; }
        ans.push_back(node);
        loop_node(node->child);
        loop_node(node->next);
    }
    Node* flatten(Node* head) {
        if(head == NULL) { return head; }
        loop_node(head);
        for(int i = 0 ; i < ans.size() - 1 ; i++)
        {
            if(i == 0) { ans[i]->prev = NULL; }
            ans[i]->child = NULL;
            ans[i]->next = ans[i+1];
            ans[i+1]->prev = ans[i];
        }
        ans[ans.size() - 1]->child = NULL;        
        ans[ans.size() - 1]->next = NULL;
        return head;
    }
};
