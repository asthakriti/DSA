class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
          vector<int> ans;
        int top = 0, bottom = matrix.size() - 1;
        int left = 0, right = matrix[0].size() - 1;

        while (top <= bottom && left <= right) {
            // 1. top row: left → right
            for (int col = left; col <= right; col++)
                ans.push_back(matrix[top][col]);
            top++;

            // 2. right column: top → bottom
            for (int row = top; row <= bottom; row++)
                ans.push_back(matrix[row][right]);
            right--;

            // 3. bottom row: right → left (only if a row is left)
            if (top <= bottom) {
                for (int col = right; col >= left; col--)
                    ans.push_back(matrix[bottom][col]);
                bottom--;
            }

            // 4. left column: bottom → top (only if a column is left)
            if (left <= right) {
                for (int row = bottom; row >= top; row--)
                    ans.push_back(matrix[row][left]);
                left++;
            }
        }
        return ans;
    }
};