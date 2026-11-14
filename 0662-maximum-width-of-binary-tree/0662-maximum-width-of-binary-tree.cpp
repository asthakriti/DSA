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
    int widthOfBinaryTree(TreeNode* root) {

        int max_width=0;

        queue<pair<TreeNode*,int>> q;

        if(root) q.push({root,0});

        int first=0,last=0;

        while(!q.empty()){

            int size=q.size();

            

            for(int i=0;i<size;i++){

                TreeNode* node=q.front().first;

                long long idx=q.front().second;

                q.pop();

                if(i==0) first=idx;

                if(i==size-1) last=idx;

                if(node->left) q.push({node->left,2*idx+1});
                if(node->right) q.push({node->right,2*idx+2});

                
            }

            max_width=max(max_width,last-first+1);
        }

        return max_width;
    }
};