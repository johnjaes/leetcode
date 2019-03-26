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
    void loop_tree(TreeNode* this_node , int val)
    {
        if(this_node->val > val)
        {
            if(this_node->left == NULL)
            {
                TreeNode* new_node = new TreeNode(val);
                this_node->left = new_node;
                return ;
            }
            else
            {
                loop_tree(this_node->left , val);
            }
        }
        else
        {
            if(this_node->right == NULL)
            {
                TreeNode* new_node = new TreeNode(val);
                this_node->right = new_node;
                return ;
            }
            else
            {
                loop_tree(this_node->right , val);
            }
        }
    }
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(root == NULL)
        {
            TreeNode* ans = new TreeNode(val);
            return ans;
        }
        loop_tree(root , val);
        return root;
    }
};
