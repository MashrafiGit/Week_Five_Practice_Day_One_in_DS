// class Solution {
//     vector<int> v;
//     void postOrder_traversal(TreeNode* root)
//     {
//         if(root == NULL) return;
//         postOrder_traversal(root->left);
//         postOrder_traversal(root->right);
//         v.push_back(root->val);
//     }
// public:
//     vector<int> postorderTraversal(TreeNode* root) {
//         postOrder_traversal(root);
//         return v;
//     }
// };