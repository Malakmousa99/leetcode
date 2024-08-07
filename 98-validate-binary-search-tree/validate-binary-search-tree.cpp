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
    bool isValidBST(TreeNode* root)   
 {
        long minVal = LONG_MIN, maxVal = LONG_MAX;
        return validateTree(root, minVal, maxVal);
    }

private:
    bool validateTree(TreeNode* root, long minVal, long maxVal) {
        if (root == NULL) return true;

        if (root->val <= minVal || root->val >= maxVal) {
            return false;
        }

        return validateTree(root->left, minVal, root->val) &&
               validateTree(root->right, root->val, maxVal);
    }
};