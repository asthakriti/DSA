class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        
        //define the distance matrix

        if(grid[0][0] == 1){
            return -1;
        }

        

        int row_len = grid.size();
        int col_len = grid[0].size();

        if(row_len - 1 == 0 && col_len - 1 == 0){
            return 1;
        }

        vector<vector<int>> dis_mat(row_len, vector<int>(col_len, INT_MAX));

        dis_mat[0][0] = 0;

        queue<pair<int,pair<int,int>>> q;
        q.push({0,{0,0}});

        while(!q.empty()){
            
            auto node = q.front();

            int dis = node.first;
            int row = node.second.first;
            int col = node.second.second;

            q.pop();

            for(int i = -1; i<=1; i++){
                for(int j = -1; j<=1; j++){
                    int bgl_row = row + i;
                    int bgl_col = col + j;

                    if(bgl_row < row_len && bgl_col < col_len && bgl_row >= 0 && bgl_col >= 0
                     && grid[bgl_row][bgl_col] == 0 && dis + 1 < dis_mat[bgl_row][bgl_col]){
                        
                        dis_mat[bgl_row][bgl_col] = dis + 1;

                        if(bgl_row == row_len-1 && bgl_col == col_len-1){
                            return dis+2;
                        }
                        

                        q.push({dis+1, {bgl_row, bgl_col}});
                     }

                }
            }
        }

        return -1;
    }
};