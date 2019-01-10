/**
 * Definition for binary tree with next pointer.
 * struct TreeLinkNode {
 *  int val;
 *  TreeLinkNode *left, *right, *next;
 *  TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
 * };
 */
class Solution {
public:    
    void connect(TreeLinkNode *root) {
        if(root == NULL) { return ;}
        
        queue<TreeLinkNode *> waitList;
        waitList.push(root);
        while(waitList.size() != 0)
        {
            TreeLinkNode *node = waitList.front();
            waitList.pop();
            if(node->left != NULL) { waitList.push(node->left); }
            if(node->right != NULL) { waitList.push(node->right);}
            
            if(node->left != NULL && node->right != NULL)
            {
                node->left->next = node->right;
            }
            
            if(node->next != NULL)
            {
                 TreeLinkNode *bridge_link = node->right != NULL ? node->right : node->left != NULL ? node->left : NULL;
                if(bridge_link != NULL)
                {
                    TreeLinkNode* loop_find = node->next;
                    while(loop_find != NULL)
                    {
                        TreeLinkNode *bridge_link_next = loop_find->left != NULL ? loop_find->left : loop_find->right != NULL ? loop_find->right : NULL;
                        if(bridge_link_next != NULL)
                        {
                            bridge_link->next = bridge_link_next;
                            break;
                        }
                        else
                        {
                           loop_find = loop_find->next;
                        }
                    }              
                
                }            
            }
        }
    }
};
