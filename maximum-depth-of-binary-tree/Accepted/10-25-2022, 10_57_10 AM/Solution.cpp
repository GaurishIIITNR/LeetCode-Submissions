// https://leetcode.com/problems/maximum-depth-of-binary-tree

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
    int hgt(TreeNode* root){
        // Base
        if(root==NULL){
            return 0;
        }
        // Recursive 
        int lr=hgt(root->left);
        int hr=hgt(root->right);
        return 1+max(lr,hr);
    }
    int maxDepth(TreeNode* root) {
        return hgt(root);
    }
};