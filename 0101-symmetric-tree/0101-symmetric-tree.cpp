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
    bool isSymmetricChildren(TreeNode* l_child, TreeNode* r_child) {
        if (!l_child && !r_child)
            return true;

        if (!l_child || !r_child)
            return false;
        else if (l_child->val != r_child->val)
            return false;
        else
            return isSymmetricChildren(l_child->left, r_child->right) &&
                   isSymmetricChildren(r_child->left, l_child->right);
    }

    bool isSymmetric(TreeNode* root) {
        if (!root)
            return true;
        return isSymmetricChildren(root->left, root->right);
    }
};