class Solution {
public:
    int n, m;
    int delRow[4] = {1, -1, 0, 0};
    int delCol[4] = {0, 0, 1, -1};

    bool dfs(int row, int col, int idx, vector<vector<char>>& board,
             string& word, vector<vector<int>>& vis) {

        if (idx == word.size() - 1) return true;   // last letter matched

        vis[row][col] = 1;

        for (int k = 0; k < 4; k++) {
            int nrow = row + delRow[k];
            int ncol = col + delCol[k];

            if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < m
                && !vis[nrow][ncol]
                && board[nrow][ncol] == word[idx + 1]) {
                if (dfs(nrow, ncol, idx + 1, board, word, vis)) return true;
            }
        }

        vis[row][col] = 0;   // backtrack
        return false;
    }

    bool exist(vector<vector<char>>& board, string word) {
        n = board.size();
        m = board[0].size();
        vector<vector<int>> vis(n, vector<int>(m, 0));

        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                if (board[i][j] == word[0] && dfs(i, j, 0, board, word, vis))
                    return true;

        return false;
    }
};