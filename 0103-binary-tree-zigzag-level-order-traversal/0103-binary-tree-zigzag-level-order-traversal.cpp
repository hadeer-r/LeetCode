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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {

        int level{};
        vector<vector<int>> result;
        if (!root)
            return result;
        deque<TreeNode*> tree;
        tree.push_back(root);
        while (!tree.empty()) {
            vector<int> one_level;
            int sz = (int)tree.size();

            while (sz--) {
                if (level % 2 != 0) {
                    TreeNode* cur = tree.back();
                    tree.pop_back();
                    one_level.push_back(cur->val); // push in vector

                    if (cur->right) {
                        tree.push_front(cur->right);
                    }
                    if (cur->left) {
                        tree.push_front(cur->left);
                    }
                }

                else {
                    TreeNode* cur = tree.front();
                    tree.pop_front();

                    one_level.push_back(cur->val); // push in vector

                    if (cur->left) {
                        tree.push_back(cur->left);
                    }
                    if (cur->right) {
                        tree.push_back(cur->right);
                    }
                }
            }

            ++level;
            result.push_back(one_level);
        }

        return result;
    }
};