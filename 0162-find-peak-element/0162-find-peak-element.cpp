class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n=nums.size();

        //For edge case
        if(n==1){
            return 0;
        }

        if(nums[0]>nums[1]){
            return 0;
        }

        if(nums[n-1]>nums[n-2]){
            return n-1;
        }

        //Now apply binary seach for the rest of the element
        int low=1; int high=n-2;

        while(low<=high){
            int mid=(low+high)/2;

            if(nums[mid]>nums[mid-1]  && nums[mid]>nums[mid+1]){
                return mid;
            }

            //Find the searching space
            //1. Increasing slope
            else if(nums[mid]<nums[mid+1]){
                //Peak on the right side
                low=mid+1;
            }

            else{
                //Decresing slope
                high=mid-1;
            }
        }

        return -1;
    }
};