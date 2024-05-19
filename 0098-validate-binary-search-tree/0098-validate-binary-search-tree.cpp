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
    bool isValidChild(TreeNode* root, int parent, bool min) {
        if (!root)
            return true;
        if (parent >= root->val && min == true)
            return false;
        else if (parent <= root->val && min == false)
            return false;
        return isValidChild(root->right, parent, min) &&
               isValidChild(root->left, parent, min);
    }
    bool isValidBST(TreeNode* root) {
        if (!root)
            return true;
        if (root->left && root->left->val >= root->val) {
            return false;
        }
        if (root->right && root->right->val <= root->val) {
            return false;
        }
        if (!isValidChild(root->right, root->val, true) ||
            !isValidChild(root->left, root->val, false))
            return false;

        return isValidBST(root->right) && isValidBST(root->left);
    }
};