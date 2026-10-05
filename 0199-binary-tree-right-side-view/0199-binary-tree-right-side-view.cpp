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
 
 void right(TreeNode* node,int level,vector<int> &ans){
    if(node==NULL) return;

    if(ans.size()==level){
        ans.push_back(node->val);
    }

    right(node->right,level+1,ans);
    right(node->left,level+1,ans);
 }
    vector<int> rightSideView(TreeNode* root) {
    //      vector<int> result;
    // if (!root) return result;

    // queue<TreeNode*> q;
    // q.push(root);

    // while (!q.empty()) {
    //     int levelSize = q.size();
    //     for (int i = 0; i < levelSize; i++) {
    //         TreeNode* current = q.front();
    //         q.pop();
            
    //         // Save the last node of each level
    //         if (i == levelSize - 1) {
    //             result.push_back(current->val);
    //         }

    //         if (current->left) q.push(current->left);
    //         if (current->right) q.push(current->right);
    //     }
    // }

    // return result;


    vector<int> ans;
    right(root,0,ans);

    return ans;
    }
};