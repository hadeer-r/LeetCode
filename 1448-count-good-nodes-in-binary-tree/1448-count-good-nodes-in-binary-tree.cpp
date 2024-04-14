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
class Solution {
public:
    int goodNodes(TreeNode* root, int maxSoFar){
        if(!root)
        return 0;
        int r,l;
        int me{};
        me+=(root->val>=maxSoFar);
        r=goodNodes(root->right,max(maxSoFar,root->val));
        l=goodNodes(root->left,max(maxSoFar,root->val));
        return r+l+me;
    }

    int goodNodes(TreeNode* root) {
        if(!root)
        return 0;
        return goodNodes(root,root->val);
        
    }
    
};