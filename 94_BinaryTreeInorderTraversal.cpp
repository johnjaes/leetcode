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
    vector<int> ans;
    void search_node(TreeNode* this_node)
    {
        if(this_node->left != NULL)
        {
            search_node(this_node->left);
        }
        ans.push_back(this_node->val);
        if(this_node->right != NULL)
        {
            search_node(this_node->right);
        }
    }
    vector<int> inorderTraversal(TreeNode* root) {
        if(root != NULL) { search_node(root); }
        return ans;
    }
};
