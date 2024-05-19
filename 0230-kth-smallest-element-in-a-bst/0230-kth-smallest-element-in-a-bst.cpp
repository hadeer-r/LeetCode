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
    void in_order_traverse(TreeNode *root, vector<int> &in_order)
    {
        if (!root)
            return;
        in_order_traverse(root->left, in_order);
        in_order.push_back(root->val);
        in_order_traverse(root->right, in_order);
    }
    int kthSmallest(TreeNode *root, int k)
    {
        vector<int> in_order;
        in_order_traverse(root, in_order);
        return in_order[k - 1];
    }
};