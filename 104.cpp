/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int Loop(TreeNode* root, int D)
    {
        if(root == NULL) { return D; }
        D += 1;
        int max_num = 0;
        max_num = max(max_num, Loop(root->left, D));
        max_num = max(max_num, Loop(root->right, D));
        
        return max_num;
    }
    int maxDepth(TreeNode* root) {
        return Loop(root, 0);
    }
};
