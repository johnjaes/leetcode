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
    vector<vector<int>> ans;
	vector<vector<int>> pathSum(TreeNode* root, int sum) {
		vector<int> a;
		if(root != NULL){ iterator_run(root, a, sum, 0); }		
		return ans;
	}
	void iterator_run(TreeNode* r, vector<int> list_n , int sum , int total)
	{
		total += r->val;
		list_n.push_back(r->val);
		if (r->left == NULL && r->right == NULL && total == sum)
		{
			ans.push_back(list_n);
		}
		if (r->left != NULL) { iterator_run(r->left, list_n, sum, total); }
		if (r->right != NULL) { iterator_run(r->right, list_n, sum, total); }
	}
};
