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
    TreeNode *searchBST(TreeNode *root, int val)
    {

        if (!root)
            return nullptr;

        queue<TreeNode *> qu;
        qu.push(root);

        while (!qu.empty())
        {
            TreeNode *temp = qu.front();
            qu.pop();
            if (val == temp->val)
                return temp;
            if (temp->left && val <= temp->val)
            {
                qu.push(temp->left);
            }
            else if (temp->right && val > temp->val)
            {
                qu.push(temp->right);
            }
        }
        return nullptr;
    }
};