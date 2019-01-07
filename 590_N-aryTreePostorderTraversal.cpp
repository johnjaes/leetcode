/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/
class Solution {
public:
    vector<int> postorder(Node* root) {
        vector<int> ans;
        if(root == NULL){return ans;}
        
        stack<Node*> stack_N;
        stack_N.push(root);            
        Node* last_child_fin = NULL;
        while(!stack_N.empty())
        {
            Node* now_N = stack_N.top();
            if(now_N->children.empty() || now_N->children.back() == last_child_fin)
            {
                last_child_fin = now_N;
                ans.push_back(now_N->val);
                stack_N.pop();
            }
            else
            {
                vector<Node*> all_child = now_N->children;
                reverse(all_child.begin() , all_child.end());
                for(int i = 0 ; i < all_child.size() ; i++)
                {
                    stack_N.push(all_child[i]);
                }
            }
        }
        
        return ans;
    }
};
