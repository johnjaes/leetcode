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
    vector<TreeNode*> ans;
    vector<TreeNode*> delNodes(TreeNode* root, vector<int>& to_delete) {
        ans.push_back(root);
        
        for(int del = 0 ; del < to_delete.size() ; del++ )
        {
            for(int i = 0 ; i < ans.size() ; i++)
            {
                Cut_Node(ans[i], to_delete[del]); 
                if(ans[i]->val == to_delete[del]) 
                {
                    ans.erase(ans.begin()+i);                 
                }
                               
            }    
        }
        return ans;
    }
    void Cut_Node(TreeNode* root , int target_val)
    {
        if(root->val == target_val)
        {
            if(root->left != NULL)
            {ans.push_back(root->left);}
            if(root->right != NULL)
            {ans.push_back(root->right);}
            return;
        }
        if(root->left != NULL)
        {
            Cut_Node(root->left, target_val);
            if(root->left->val == target_val)
            {
                root->left = NULL;
            }
        }
        if(root->right != NULL)
        {
            Cut_Node(root->right, target_val);
            if(root->right->val == target_val)
            {
                root->right = NULL;
            }
        }
        
        return;
    }
};
