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
    bool check_same(TreeNode* p , TreeNode* q)
    {
        if(p == NULL && q == NULL) { return true; }
        else if(p == NULL && q != NULL) { return false; }
        else if(p != NULL && q == NULL) { return false; }
        
        if(p->val != q->val) { return false; }
        bool left = check_same(p->left , q->left);
        bool right = check_same(p->right , q->right);
        if(left == false || right == false) { return false; }
        else { return true;}
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        
        return check_same(p , q);
    }
};
