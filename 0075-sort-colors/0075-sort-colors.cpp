class Solution {
public:
    void sortColors(vector<int>& arr) {
        
        int low=0;
        int mid=0;
        int high=arr.size()-1;
        int n=arr.size();

        while(mid<=high){

            if(low<n && arr[mid]==0){
                swap(arr[mid],arr[low]);
                low++;mid++;
            }

            else if(high>=0 && arr[mid]==2){
                swap(arr[mid],arr[high]);
                high--;
            }

            else{
                mid++;
            }
        }
        
         
    }
};