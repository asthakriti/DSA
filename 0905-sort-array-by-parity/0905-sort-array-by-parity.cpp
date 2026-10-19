class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        
        int left=0;
        int right=nums.size()-1;
        while(left<right){
            while(right>left && nums[left]%2!=0){
                //odd
                swap(nums[left],nums[right]);
                right--;
            }
            left++;
        }
        return nums;
       

    }
};