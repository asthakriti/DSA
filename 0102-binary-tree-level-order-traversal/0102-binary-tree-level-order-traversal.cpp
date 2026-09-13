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

    
    vector<vector<int>> levelOrder(TreeNode* root) {
        
         vector<vector<int>> res;

        //Edge cond:when No element present
        if(!root)return res;

        queue<TreeNode*> q;
        q.push(root);
       
        while(!q.empty()){
            int level_size=q.size();
            vector<int> levelNode;

            for(int i=0;i<level_size;i++){
                 TreeNode *current=q.front();
                 q.pop();
                 levelNode.push_back(current->val);

                 if(current->left) q.push(current->left);
                 if(current->right) q.push(current->right);
            }

            res.push_back(levelNode);
            }
            return res;

    }
};