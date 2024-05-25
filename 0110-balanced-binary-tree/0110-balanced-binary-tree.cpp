/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    int height(TreeNode* root) {
        if (!root)
            return 0;
        int r{1}, l{1};
        r += height(root->right);
        l += height(root->left);
        
        return max(r, l);
    }
    bool isBalanced(TreeNode* root) {
        if (!root)
            return true;
        int r = height(root->right);
        int l = height(root->left);
        if (r != l && r != l + 1 && r + 1 != l)
            return false;
        return isBalanced(root->right) && isBalanced(root->left);
    }
};