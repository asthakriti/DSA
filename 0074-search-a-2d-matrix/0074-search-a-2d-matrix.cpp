class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int m=matrix[0].size();

       int low=0;int high=n-1;
       while(low<=high){
        int mid=low+(high-low)/2;

        if(matrix[mid][0]<=target && matrix[mid][m-1]>=target){
            //ans in this row 
            //apply binary search 
            int left=0;int right=m-1;
            while(left<=right){
                int m=left+(right-left)/2;
                if(matrix[mid][m]==target){
                    return true;
                }
                 if(matrix[mid][m]<target){
                    left=m+1;
                 }
                 else{
                    right=m-1;
                 }
            }
        }

        if(matrix[mid][0]>target){
            high=mid-1;
        }
        else{
            low=mid+1;
        }

       }

       return false;
    }
};