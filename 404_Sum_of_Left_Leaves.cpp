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
    void loop_node(TreeNode* node)
    {
        if(node == NULL) { return ; }
                
        if(node->left != NULL)
        {
            if(node->left->left == NULL && node->left->right == NULL)
            {
                ans += node->left->val;
            }
            loop_node(node->left);
        }
        if(node->right != NULL)
        {
            loop_node(node->right);
        }
        
        return ;
    }
    int sumOfLeftLeaves(TreeNode* root) {                
        loop_node(root);
        return ans;
    }
};
