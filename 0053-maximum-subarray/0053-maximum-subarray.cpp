class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int n = nums.size();
        int i = 0;
        int maxi = nums[0];
        int sum=0;

        for(int j = 0; j < n;j++){
            sum += nums[j];

            maxi = max(maxi,sum);

            if(sum<0){
                sum=0;
                i=j+1;
            }

            
        }

        return maxi;
        
        
    }
};