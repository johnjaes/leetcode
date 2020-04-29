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
    map<int , int> Sum;
    int deepest = 0;
    int deepestLeavesSum(TreeNode* root) {
        map<int,int> new_Sum;
        Sum = new_Sum;
        
        Deep_Sum(root, 0);
        return Sum[deepest];
    }
    void Deep_Sum(TreeNode* root, int this_deep)
    {
        if(root == NULL) { return; }
        if(Sum.find(this_deep) == Sum.end()) 
        {
            Sum[this_deep] = 0; 
            deepest = this_deep;
        }
        Sum[this_deep] += root->val;
        Deep_Sum(root->left, this_deep+1);
        Deep_Sum(root->right, this_deep+1);
    }
};
