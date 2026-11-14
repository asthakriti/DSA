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

bool check(TreeNode* node, long long lo, long long hl){

    if(!node) return true;

    if(node->val<=lo || node->val>=hl) return false;

    bool left=check(node->left, lo, node->val);
    bool right=check(node->right,node->val,hl);

    return left&&right;
}



bool isValidBST(TreeNode* root) {
    
    return check(root,LLONG_MIN,LLONG_MAX);
}
};