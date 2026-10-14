class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
          int top=0,left=0;
          int bottom=matrix.size()-1;
          int right=matrix[0].size()-1;

          vector<int> ans;

          while(left<=right && top<=bottom){
            //move left from right keeping row(top) as constant
            for(int col=left;col<=right;col++){
                ans.push_back(matrix[top][col]);
                
            }

            top++;

            //move from top to bottom col(right) is constant
            for(int row=top;row<=bottom;row++){
                ans.push_back(matrix[row][right]);
                
            }

            right--;

            //move from left to right row is const(bottom)
            if(bottom>=top){
            for(int col=right;col>=left;col--){
                ans.push_back(matrix[bottom][col]);
                
            }}bottom--;

            //move from bottom to top keeping left as cont
            if(right>=left){
            for(int row=bottom;row>=top;row--){
                ans.push_back(matrix[row][left]);
                
            }}left++;
          }
          return ans;
    }
};