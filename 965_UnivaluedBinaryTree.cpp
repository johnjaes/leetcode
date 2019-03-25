/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool ans = true;
    void search_node(TreeNode* this_node)
    {
        if(this_node->left != NULL)
        {
            if(this_node->val != this_node->left->val)
            {
                ans = false;
                return ;
            }
            search_node(this_node->left);
        }
        if(this_node->right != NULL)
        {
            if(this_node->val != this_node->right->val)
            {
                ans = false;
                return ;
            }
            search_node(this_node->right);
        }
    }
    bool isUnivalTree(TreeNode* root) {
        if(root == NULL)
        {
            return true;
        }
        search_node(root);
        return ans;
    }
};
