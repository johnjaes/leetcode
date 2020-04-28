/**
1379. Find a Corresponding Node of a Binary Tree in a Clone of That Tree
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
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        
        if(cloned == NULL) { return NULL; }
        if(cloned->val == target->val) { return cloned; }
        
        TreeNode* left_s = getTargetCopy(original, cloned->left, target);
        if(left_s != NULL) { return left_s; }
        
        TreeNode* right_s = getTargetCopy(original, cloned->right, target);
        if(right_s != NULL) { return right_s; }
        
        return NULL;
    }
};
