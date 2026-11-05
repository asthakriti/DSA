class Solution {
public:
    bool canJump(vector<int>& nums) {

        int i=0;
        int max_far=0;
        for(i=0;i<nums.size();i++){

            if(i>max_far){
                return false;
            }

            max_far=max(max_far,i+nums[i]);
            
           
        }

         

        return true;
    }
};