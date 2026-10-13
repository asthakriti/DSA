class Solution {
public:
    int maxProfit(vector<int>& nums) {

       int max_proft=0;
       int cp=nums[0];

       for(int i=0;i<nums.size();i++){
        int profit=nums[i]-cp;
        max_proft=max(max_proft,profit);

        if(cp>nums[i]){cp=nums[i];}
       }

       return max_proft;
    }
};