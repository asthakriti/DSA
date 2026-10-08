class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();

                vector<vector<int>> ans(m, vector<int>(n));


        for(int row=0;row<n;row++){
            for(int col=0;col<m;col++){
ans[col][row] = matrix[row][col];            }
        }

        return ans;
    }
};