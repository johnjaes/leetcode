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
    vector<vector<int> > ans;
    void res_alg(TreeNode* now_node , int n_level)
    {               
        if(ans.size() < n_level) { ans.push_back(vector<int>()); }
        ans[n_level-1].push_back(now_node->val);
        if(now_node->left != NULL) { res_alg(now_node->left , n_level+1); }
        if(now_node->right != NULL) { res_alg(now_node->right , n_level+1); }
        return ;
    }
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        if(root == NULL) {return ans; }
        TreeNode* this_now = root;
        res_alg(this_now , 1);
        reverse(ans.begin() , ans.end());
        return ans;
    }
};
