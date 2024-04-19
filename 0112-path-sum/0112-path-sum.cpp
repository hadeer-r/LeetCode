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
    bool hasPathSum(TreeNode *root, int targetSum)
    {
        if (!root)
            return 0;
        if (root->val == targetSum&&!root->left&&!root->right)
            return 1;
        bool result = hasPathSum(root->right, targetSum - root->val);
        if (result == 1)
            return 1;
        result = hasPathSum(root->left, targetSum - root->val);
        if (result == 1)
            return 1;
        return 0;
    }
};