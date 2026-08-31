class Solution {
public:

    int give_col(int colour){
        if(colour == 0){
            return 1;
        }

        else{
            return 0;
        }
    }

    bool bfs(int node,vector<vector<int>>& graph, vector<int>& vis, 
            vector<int>& col){

        queue<int> q;
        q.push(node);

        int n = graph.size();


        col[0] = 0;
        vis[node] = 1;

        while(!q.empty()){
            int q_node = q.front();
            q.pop();

            for(auto neigh : graph[q_node]){
                if(!vis[neigh]){
                   vis[neigh] = 1; 
                   int x = give_col(col[q_node]);
                    col[neigh] = x; 
                    q.push(neigh);
                }

                else{
                    if(col[neigh] == col[q_node]){
                        return false;
                    }
                }
            }

            
        }

        return true;
    }
    bool isBipartite(vector<vector<int>>& graph) {

        int n = graph.size();
        
        
        vector<int> vis(n, 0);
        vector<int> col(n, -1);


        

        for(int i = 0; i < n; i++) {

            if(!vis[i]) {

                if(!bfs(i, graph, vis, col))
                    return false;
            }
        }

        return true;
        
    }
};