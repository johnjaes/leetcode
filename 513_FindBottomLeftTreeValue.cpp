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
    int max_len = -1;
    int ans = -1;
    void search_node(TreeNode* this_node , int length)
    {
        if(length > max_len)
        {
            max_len = length;
            ans = this_node->val;
        }
        if(this_node->left != NULL)
        {
            search_node(this_node->left , length+1);
        }
        if(this_node->right != NULL)
        {
            search_node(this_node->right , length+1);
        }
    }
    int findBottomLeftValue(TreeNode* root) {        
        search_node(root , 0);
        return ans;
    }
};
