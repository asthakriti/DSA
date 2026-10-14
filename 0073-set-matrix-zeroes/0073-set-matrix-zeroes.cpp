class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {

        //1St PASS Using 1 row and col to store the info

        int n=matrix.size();
        int m=matrix[0].size();

        bool firstRow=false;

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int row=i;
                int col=j;

                if(matrix[row][col]==0){
                    if(row==0){
                        firstRow=true;
                    }
                    else{
                        matrix[row][0]=0;
                    }
                    matrix[0][col]=0;
                }
            }
        }

        //2 PASS changing other element based on the first row and col

        for(int i=n-1;i>=1;i--){
            for(int j=m-1;j>=1;j--){
                
                if(matrix[0][j]==0 || matrix[i][0]==0){
                    matrix[i][j]=0;
                }
            }
        }

        //remaining first row and col
        //first we will use 0,0 because might the var firstRow destroy the info
        if(matrix[0][0]==0){
            for(int row=0;row<n;row++){
                matrix[row][0]=0;
            }
        }

        if(firstRow){
            for(int col=0;col<m;col++){
                matrix[0][col]=0;
            }
        }

    
        
    }
};