class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int low=0;int high=nums.size()-1;
        int n=nums.size();

        while(low<=high){
            int mid=low+(high-low)/2;

            long long  left=(mid==0)?LLONG_MIN:nums[mid-1];
            long long right=(mid==n-1)?LLONG_MIN:nums[mid+1];

            if(left<nums[mid] && right<nums[mid]){
                return mid;
            }

            if(left < nums[mid] && right>nums[mid]){
                //strictly increasing
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }

        return -1;
    }
};