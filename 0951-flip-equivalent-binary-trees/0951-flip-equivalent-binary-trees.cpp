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
string paranthize(TreeNode* root) {
    if (!root)
        return "()";
    string tree = "(" + to_string(root->val);
    if (!root->left) {
        tree += "()";
    }
    if (!root->right) {
        tree += "()";
    }
    if (root->right && root->left) {
        if (root->right->val < root->left->val) {
            tree += paranthize(root->right);
            tree += paranthize(root->left);
        } else {
            tree += paranthize(root->left);
            tree += paranthize(root->right);
        }
    } else if (root->right && !root->left) {
        tree += paranthize(root->right);
    } else if (root->left && !root->right) {
        tree += paranthize(root->left);
    }
    tree += ")";
    return tree;
}

class Solution {
public:
    bool flipEquiv(TreeNode* root1, TreeNode* root2) {
        if (!root1 && !root2)
            return true;
        else if (!root1 || !root2)
            return false;

        return paranthize(root1) == paranthize(root2);
    }
};