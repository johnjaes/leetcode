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
    int path_go(TreeNode* node , int &res)
    {
        if(node == NULL) { return 0; }
        int left = path_go(node->left , res);
        int right = path_go(node->right , res);
        int nl = 0;
        int nr = 0;
        if(node->left != NULL && (node->left->val == node->val)){ nl = left + 1; }
        if(node->right != NULL && (node->right->val == node->val)){ nr = right + 1; }
        res = max(res , nl + nr);
        return max(nl , nr);
    }
    int longestUnivaluePath(TreeNode* root) {
       if(root == NULL) { return 0; }
       int res = 0; 
       path_go(root , res);
       return res;
    }
};
