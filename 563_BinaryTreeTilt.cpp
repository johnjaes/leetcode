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
    int ans = 0;
    int loop_node(TreeNode* this_node)
    {
        if(this_node == NULL) { return 0; }
        int left = loop_node(this_node->left);
        int right = loop_node(this_node->right);
        ans += abs(left - right);
        
        return left+right+this_node->val;
    }
    int findTilt(TreeNode* root) {
        loop_node(root);
        return ans;        
    }
};
