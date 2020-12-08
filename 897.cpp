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
    vector<TreeNode*> all_list;
    
    TreeNode* Travel_Tree(TreeNode* it)
    {        
        if(it->left != NULL) { Travel_Tree(it->left); }
        all_list.push_back(it);
        if(it->right != NULL) { Travel_Tree(it->right); }
        return NULL;
    }
    TreeNode* increasingBST(TreeNode* root) {
        Travel_Tree(root);     
        
        TreeNode* target = all_list[0];
        for(int i = 1 ; i < all_list.size() ; i++)
        {                               
            all_list[i]->left = NULL;
            all_list[i]->right = NULL;
            target->left = NULL;
            target->right = all_list[i];           
            
            target = target->right;
        }
        return all_list[0];
    }
};
