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
class Solution
{
public:
    vector<int> dfs(TreeNode *root, int &a, int &b, int q)
    {
        if (root->val <= q)
            a = max(a, root->val);
        if (root->val >= q)
            b = min(b, root->val);
        if (root->left != NULL)
        {
            dfs(root->left, a, b, q);
        }
        if (root->right != NULL)
        {
            dfs(root->right, a, b, q);
        }
        return {a, b};
    }
    vector<vector<int>> closestNodes(TreeNode *root, vector<int> &v)
    {
        vector<vector<int>> res;
        for (int i = 0; i < v.size(); i++)
        {

            int a = -1, b = INT_MAX;
            dfs(root, a, b, v[i]);
            if (b == INT_MAX)
                b = -1;
            res.push_back({a, b});
        }
        return res;
    }
};