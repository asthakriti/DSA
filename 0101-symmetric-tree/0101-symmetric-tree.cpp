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
bool isMirror(TreeNode* left, TreeNode* right) {
       //base condition
       //agr dono null hua->symmetry
       if(left==NULL && right==NULL) return true;
       //agr dono me se koi null hua or dushhra koi val->Asymmetry
       if(left==NULL || right==NULL) return false;

       //value check
       if(left->val!=right->val) return false;

       //simultaneous call
       return isMirror(left->left,right->right) &&
              isMirror(left->right,right->left);
    }
    bool isSymmetric(TreeNode* root) {
    
        if(root==NULL){
            return true;
        }

        return isMirror(root->left,root->right);

    }
};