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
// class Solution {
// vector<int> v;
// void inOrder_traversal( TreeNode * root)
// {
//     if(root == NULL) return;
//     inOrder_traversal(root->left);
//     v.push_back(root->val);
//     inOrder_traversal(root->right);
// }
// public:
//     vector<int> inorderTraversal(TreeNode* root) {
//         inOrder_traversal(root);
//         return v;
//     }
// };