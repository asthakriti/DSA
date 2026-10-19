class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
       int left=0;int right=nums.size()-1;

        vector<int> res(nums.size());
        int cnt=nums.size()-1;

        while(cnt>=0){
            if(abs(nums[left])>abs(nums[right])){
                res[cnt]=nums[left]*nums[left];cnt--;
                left++;
            }
            else{
                res[cnt]=nums[right]*nums[right];cnt--;
                right--;
            }
        }
        return res;
    }
};