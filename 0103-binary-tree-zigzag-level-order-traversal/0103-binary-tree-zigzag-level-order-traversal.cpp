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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        
        vector<vector<int>> ans;

        bool leftToRight= true;

        queue<TreeNode*> q;

        if(root) q.push(root);

        while(!q.empty()){
            int size=q.size();

            vector<int> curr_level;

            for(int i=0;i<size;i++){
                
                TreeNode* node=q.front();
                q.pop();

                curr_level.push_back(node->val);

                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
            }

            if(!leftToRight){
                reverse(curr_level.begin(),curr_level.end());
            }

            ans.push_back(curr_level);

            leftToRight= !leftToRight;
        }

        return ans;
    }
};