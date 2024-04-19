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
class Solution
{
public:
    int height(TreeNode *root)
    {
        if (!root)
            return 0;
        int right{}, left{};
        right = height(root->right);
        left = height(root->left);
        return max(right, left) + 1;
    }

    int diameterOfBinaryTree(TreeNode *root, int maxSoFar)
    {
        if (!root)
            return 0;
        maxSoFar = max(height(root->right) + height(root->left), maxSoFar);
        int right = diameterOfBinaryTree(root->right, maxSoFar);
        int left = diameterOfBinaryTree(root->left, maxSoFar);

        return max(max(right,left),maxSoFar);
    }

    int diameterOfBinaryTree(TreeNode *root)
    {
        if (!root)
            return 0;
        int left = diameterOfBinaryTree(root->left, height(root->right) + height(root->left));
        int right = diameterOfBinaryTree(root->right, height(root->right) + height(root->left));
        return max(right, left);
    }
};