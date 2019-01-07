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
    bool ans;
    int target_sum;
    bool check_root(TreeNode* this_r , int sum_now)
    {        
        if(this_r->left == NULL)
        {
            if(this_r->right == NULL && sum_now == target_sum) { ans = true; }
        }
        else
        {
            check_root(this_r->left , sum_now + this_r->left->val);
        }
        if(this_r->right == NULL)
        {
            if(this_r->left == NULL && sum_now == target_sum) { ans = true; }
        }
        else
        {
            check_root(this_r->right , sum_now + this_r->right->val);
        }
        return true;
    }
    bool hasPathSum(TreeNode* root, int sum) {
        ans = false;
        target_sum = sum;
        if(root == NULL) { return false; }
        check_root(root , root->val);
        return ans;
    }
};
