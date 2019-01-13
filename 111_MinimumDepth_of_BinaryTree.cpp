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
    map<TreeNode* , int> node_level;
    queue<TreeNode*> queues;
    int minDepth(TreeNode* root) {
        if(root == NULL) { return 0; }
        queues.push(root);
        while(queues.size() != 0)
        {
            TreeNode* node = queues.front();
            queues.pop();
            if(node_level.find(node) == node_level.end())
            {
                node_level[node] = 1;
            }
            if(node->left == NULL && node->right == NULL) 
            {
                return node_level[node];
            }
            if(node->left != NULL)
            {
                queues.push(node->left);
                node_level[node->left] = node_level[node]+1;
            }
            if(node->right != NULL)
            {
                queues.push(node->right);
                node_level[node->right] = node_level[node]+1;
            }
        }
        return 0;
    }
};
