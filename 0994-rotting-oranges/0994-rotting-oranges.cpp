class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {

        int n = grid.size();
        int m = grid[0].size();

        vector<vector<int>> vis(n, vector<int>(m,0));

        queue<pair<pair<int,int>,int>> q;

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(grid[i][j] == 2){
                    q.push({{i,j},0});
                    vis[i][j] = 2;
                }
            }
        }

        int maxi = 0;

        while(!q.empty()){

            int row = q.front().first.first;
            int col = q.front().first.second;
            int time = q.front().second;
            q.pop();
            
            maxi = max(maxi,time);
            
            int nrow[] = {-1, 1, 0, 0};
            int ncol[] = {0, 0, 1, -1};
            
            for(int i = 0; i < 4; i++){
                int delrow = row + nrow[i];
                int delcol = col + ncol[i];

                if(delrow >= 0 && delcol >= 0 && delrow < n && delcol < m
                && grid[delrow][delcol] == 1 && vis[delrow][delcol] != 2){
                    q.push({{delrow,delcol}, time+1});
                    vis[delrow][delcol] = 2;
                }
            }
        }

        for(int i = 0 ;i < n; i++){
            for(int j = 0; j < m; j++){
                if(grid[i][j] == 1 && vis[i][j] != 2){
                    return -1;
                }
            }
        }

        return maxi;
    }
};