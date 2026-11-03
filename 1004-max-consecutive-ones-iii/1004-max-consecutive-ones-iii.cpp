class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {

        int longest_length=0;
        int left=0;
        
        for(int right=0;right<nums.size();right++){
            if(nums[right]==0){
                k--;
            }

            if(k>=0){
                longest_length=max(longest_length,right-left+1);
            }

            else{
                if(nums[left]==0){
                    k++;
                }

                left++;

            }
        }

        return longest_length;
        
    }
};