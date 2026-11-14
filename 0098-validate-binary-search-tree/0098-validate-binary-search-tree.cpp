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

   void inorder(TreeNode* node, vector<int>& v) {
    if (!node) return;
    inorder(node->left, v);
    v.push_back(node->val);
    inorder(node->right, v);
}

bool isValidBST(TreeNode* root) {
    vector<int> v;
    inorder(root, v);
    for (int i = 1; i < v.size(); i++)
        if (v[i] <= v[i - 1]) return false;   // must be strictly increasing
    return true;
}
};