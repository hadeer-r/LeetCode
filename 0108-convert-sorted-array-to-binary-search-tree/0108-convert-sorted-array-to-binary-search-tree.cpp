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
    TreeNode *make_sub_tree(int start, int end, vector<int> arr)
    {
        if (start == end)
            return new TreeNode(arr[start]);
        if (end == start + 1)
        {
            TreeNode *root = new TreeNode(arr[start]);
            root->right = new TreeNode(arr[end]);
            return root;
        }
        int idx = (start + end) / 2;
        TreeNode *root = new TreeNode(arr[idx]);
        root->left = make_sub_tree(start, ((start + end) / 2) - 1, arr);
        root->right = make_sub_tree(((start + end) / 2) + 1, end, arr);

        return root;
    }
    TreeNode *sortedArrayToBST(vector<int> &nums)
    {
        if (nums.empty())
            return nullptr;

        int sz = (int)nums.size();
        return make_sub_tree(0, sz - 1, nums);
    }
};