class Solution {
public:
    int bfs(int row, int col, vector<vector<int>> &vis, vector<vector<int>> &grid){
       
       queue<pair<int,int>> q;

        int len = 0;


       q.push({row, col});
       len++;
       vis[row][col] = 1;

       int n = grid.size();
       int m = grid[0].size();


       while(!q.empty()){

        int row = q.front().first;
        int col = q.front().second;

        q.pop();

        int nrow[] = {-1, 1, 0, 0};
        int ncol[] = {0, 0, -1, 1};

        for(int i = 0; i < 4; i++){
            
            int delrow = row + nrow[i];
            int delcol = col + ncol[i];

            if(delrow >= 0 && delcol >=0 && delrow < n && delcol < m
                && vis[delrow][delcol] == 0 && grid[delrow][delcol] == 1){
                    vis[delrow][delcol] = 1;
                    q.push({delrow, delcol});
                    len++;
                }
        }

        
       }

       return len;


    }

    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        vector<vector<int>> vis(n, vector<int>(m, 0));

        int max_len = 0;

        for(int row = 0; row < n; row++){
            for(int col = 0; col < m; col++){
                if(grid[row][col] == 1 && !vis[row][col]){
                    
                int len = bfs(row, col, vis, grid);

                max_len = max(len, max_len);
                }
            }
        }
        
        return max_len;
    }
};