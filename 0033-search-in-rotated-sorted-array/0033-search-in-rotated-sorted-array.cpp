class Solution {
public:
    int search(vector<int>& nums, int target) {
        // int l=0;
        // int h=nums.size()-1;


        // while(l<=h){
        //     int mid=(l+h)/2;

        //     //Age mil gya to
        //     if(nums[mid]==target){
        //         return mid;
        //     }

        //     //As array is not sorted, first we need to find the  sorted part(left/right)
        //     if(nums[l]<=nums[mid]){ //This is true condition becoz low is alaways less than mid

        //         //Agr ye condition true hai to hamra left side sorted hai
        //         //now check  element left side me  present v hai ki nhi
        //         if(nums[l]<=target && target<=nums[mid]) {
        //             //ab yahi pr kahi v present hoga mostly left side me 
        //             h=mid-1;
        //         }
        //         else{ 
        //             //Agr yaha present nhi to ishka mtlb ki left side(mid) me nhi present hai
        //             //To mid ke right ke right me dekhna prega
        //             l=mid+1;
        //         }

        //     }

        //     else{
        //         //Agr ye condition true hai to hamra right side sorted hai
        //         //now check  element right side me  present v hai ki nhi
        //         if(nums[mid]<=target && target<=nums[h]){
        //             l=mid+1;
        //         }

        //         else{
        //             h=mid-1;
        //         }
               
        //     }




        // }
        // return -1;

        //first find the sorted part
        //then apply binary search
        
        int n=nums.size();

        int low=0; int high=n-1; 

        while(low<=high){

            int mid=(low+high)/2;

            if(nums[mid]==target){
                return mid;
            }

            if(nums[low]<=nums[mid]){
                //left part is sorted
                //now heck whether ans is present in this part or not

                if(nums[low]<=target && target<=nums[mid]){
                    //ans is present on left side
                    high=mid-1;
                }

                else{
                    low=mid+1;
                }
            }

            else{
                //right is sorted
                //check whether the ans is present in this side or not

                if(nums[mid]<=target && target<=nums[high]){
                    //present on right
                    low=mid+1;
                }

                else{
                    high=mid-1;
                }
            }
        }

        return -1;
    }
    
};