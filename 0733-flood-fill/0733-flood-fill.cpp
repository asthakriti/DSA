class Solution {
public:

    void dfs(int row, int col, int st_color, int color,
            vector<vector<int>>& vis, vector<vector<int>>& ans,
            vector<vector<int>>& original){

                int n = original.size();
                int m = original[0].size();

                ans[row][col] = color;
                vis[row][col] = 1;                

                //Find the neighbour
                int dr[] = {-1, 1, 0, 0};
                int dc[] = {0, 0, 1, -1};

                for(int i = 0; i < 4; i++){
                    
                    int nr = row + dr[i];
                    int nc = col + dc[i];

                    //validate
                    if(nr >= 0 && nr < n && nc >= 0 && nc < m){
                        if(!vis[nr][nc] && original[nr][nc] == st_color){
                            dfs(nr, nc, st_color, color, vis, ans, original);
                        }
                    }
                }
            }
   
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {

        int n = image.size();
        int m = image[0].size();
       
       vector<vector<int>> vis(n, vector<int>(m, 0));

       vector<vector<int>> ans = image;

       int st_color = image[sr][sc];

       if(st_color == color){
        return image;
       }

       else{
        dfs(sr, sc, st_color, color, vis, ans, image);
       }

       return ans;
    }
};