class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {

        int left=0,longest_len=0;

        for(int right=0;right<nums.size();right++){

        if(nums[right]==0) k--;
        

        if(k>=0){
            longest_len=max(longest_len,right-left+1);
        }
        else{
            if(nums[left]==0){
                k++;
            }
            left++;
        }

        }
        return longest_len;
        
    }
};