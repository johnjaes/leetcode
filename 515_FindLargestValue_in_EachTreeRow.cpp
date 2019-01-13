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
    vector<int> level_max;
    void loop_node(TreeNode* node , int level)
    {
        if(node == NULL) { return ; }
        if(level_max.size() <= level)
        {
            level_max.push_back(node->val);
        }
        level_max[level] = max(level_max[level] , node->val);
        
        loop_node(node->left , level+1);
        loop_node(node->right , level+1);
        
        return;
    }
    vector<int> largestValues(TreeNode* root) {
        loop_node(root , 0);
        return level_max;
    }
};
