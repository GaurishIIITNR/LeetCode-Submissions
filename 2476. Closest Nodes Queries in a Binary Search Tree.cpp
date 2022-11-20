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
    void dfs(TreeNode *root, vector<int> &v)
    {
        // if(root->left==NULL && root->right==NULL )
        //     return ;
        v.push_back(root->val);
        if (root->left != NULL)
            dfs(root->left, v);
        if (root->right != NULL)
            dfs(root->right, v);
        return;
    }
    vector<vector<int>> closestNodes(TreeNode *root, vector<int> &v)
    {
        vector<int> r;
        vector<vector<int>> res;
        dfs(root, r);
        sort(r.begin(), r.end());
        for (int i = 0; i < v.size(); i++)
        {
            int l = 0, h = r.size() - 1;
            while (l < h)
            {
                int m = l + (h - l + 1) / 2;
                if (r[m] <= v[i])
                    l = m;
                else
                    h = m - 1;
            }
            int a = -1;
            if (r[l] <= v[i])
                a = r[l];

            l = 0, h = r.size() - 1;
            while (l < h)
            {
                int m = l + (h - l) / 2;
                if (r[m] >= v[i])
                    h = m;
                else
                    l = m + 1;
            }
            int b = -1;
            if (r[l] >= v[i])
                b = r[l];

            res.push_back({a, b});
        }
        return res;
    }
};